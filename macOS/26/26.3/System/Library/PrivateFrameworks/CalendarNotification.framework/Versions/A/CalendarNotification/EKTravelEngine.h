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

+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (double)requestRefreshTimeInterval;
+ (double)_periodicRefreshInterval;
+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)requestedDarwinNotifications;

- (void)_calDatabaseChangedNotificationReceived;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_significantTimeChangeNotificationReceived;
- (BOOL)_authorizedToAcquireLocation;
- (void)start;
- (void)stop;
- (void)_installSyncYieldTimer;
- (void)_uninstallSyncYieldTimer;
- (void)_installPeriodicRefreshTimer;
- (void)_installLocationManager;
- (void)_eventKitFeatureSetChanged;
- (id)_eventStore;
- (void)_updateDatabaseEncryptionState;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)_unregisterAllAgendaEntries;
- (void)_periodicRefreshTimerFired;
- (void)receivedAlarmNamed:(id)a0;
- (void).cxx_destruct;
- (void)handleDarwinNotification:(id)a0;
- (void)_uninstallPeriodicRefreshTimer;
- (id)alarmName;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)dealloc;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (BOOL)_isProtectedDataAvailable;
- (void)_refreshIfNeeded;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_stopInternal;
- (void)_uninstallLocationManager;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)_suggestEventLocationsSettingChanged;

@end
