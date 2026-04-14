@class NSString, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSObject, NSDate;
@protocol CALNRouteHypothesizerProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    NSDate *_lastRefreshDate;
}

@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic) BOOL authorizedInternal;
@property (copy, nonatomic) id /* block */ adviceBlock;
@property (readonly, nonatomic) BOOL authorized;
@property (copy, nonatomic) id /* block */ authorizationChangedBlock;
@property (copy, nonatomic) id /* block */ eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (id)requestedDarwinNotifications;
+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;

- (void)receivedAlarmNamed:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (BOOL)_authorizedToAcquireLocation;
- (void)_unregisterAllAgendaEntries;
- (BOOL)_isProtectedDataAvailable;
- (void)start;
- (void)_installPeriodicRefreshTimer;
- (void)dealloc;
- (void)_updateDatabaseEncryptionState;
- (void)_uninstallSyncYieldTimer;
- (void)stop;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_installSyncYieldTimer;
- (void)_periodicRefreshTimerFired;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_eventKitFeatureSetChanged;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_stopInternal;
- (void)handleDarwinNotification:(id)a0;
- (void)_suggestEventLocationsSettingChanged;
- (void)_uninstallLocationManager;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (id)alarmName;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_calDatabaseChangedNotificationReceived;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)_installLocationManager;
- (void)_refreshIfNeeded;
- (void).cxx_destruct;
- (id)_eventStore;

@end
