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

+ (id)requestedDarwinNotifications;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (double)requestRefreshTimeInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (double)_periodicRefreshInterval;
+ (id)travelEligibleEventsInEventStore:(id)a0;

- (void)stop;
- (void)receivedAlarmNamed:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (BOOL)_isProtectedDataAvailable;
- (BOOL)_authorizedToAcquireLocation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_suggestEventLocationsSettingChanged;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_calDatabaseChangedNotificationReceived;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (id)_eventStore;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)_periodicRefreshTimerFired;
- (void)_eventKitFeatureSetChanged;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_stopInternal;
- (void)_uninstallSyncYieldTimer;
- (id)alarmName;
- (void)_uninstallLocationManager;
- (void).cxx_destruct;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_installLocationManager;
- (void)_refreshIfNeeded;
- (void)start;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)_updateDatabaseEncryptionState;
- (void)dealloc;
- (void)_installPeriodicRefreshTimer;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_installSyncYieldTimer;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)_unregisterAllAgendaEntries;
- (void)handleDarwinNotification:(id)a0;

@end
