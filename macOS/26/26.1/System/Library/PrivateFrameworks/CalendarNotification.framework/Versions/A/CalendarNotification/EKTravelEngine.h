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

+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (double)_periodicRefreshInterval;
+ (id)requestedDarwinNotifications;
+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (double)_travelAgendaTimeWindowInterval;

- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)_uninstallSyncYieldTimer;
- (void)start;
- (void)_uninstallPeriodicRefreshTimer;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_eventKitFeatureSetChanged;
- (id)alarmName;
- (void)_installPeriodicRefreshTimer;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)_periodicRefreshTimerFired;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_uninstallLocationManager;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (BOOL)_isProtectedDataAvailable;
- (void)_installSyncYieldTimer;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)_suggestEventLocationsSettingChanged;
- (void)_installLocationManager;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)dealloc;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_calDatabaseChangedNotificationReceived;
- (id)_eventStore;
- (void)_refreshIfNeeded;
- (void)stop;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_updateDatabaseEncryptionState;
- (void).cxx_destruct;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_unregisterAllAgendaEntries;
- (void)_stopInternal;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)handleDarwinNotification:(id)a0;
- (BOOL)_authorizedToAcquireLocation;

@end
