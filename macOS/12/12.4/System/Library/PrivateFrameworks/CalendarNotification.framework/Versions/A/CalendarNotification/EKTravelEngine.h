@class PCPersistentTimer, NSString, NSMutableDictionary, CLLocationManager, EKEventStore, NSObject;
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
    PCPersistentTimer *_periodicRefreshTimer;
    CLLocationManager *_locationManager;
    EKEventStore *_eventStore;
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

+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (double)_periodicRefreshInterval;
+ (id)requestedDarwinNotifications;
+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEventsInEventStore:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)handleBTAJob:(id)a0 named:(const char *)a1;
- (BOOL)_isProtectedDataAvailable;
- (void)_stopInternal;
- (void)_registerForNotificationObservation;
- (void)_installPeriodicRefreshTimer;
- (void)_installLocationManager;
- (void)_refreshIfNeeded;
- (void)_uninstallLocationManager;
- (void)_unregisterAllAgendaEntries;
- (void)_unregisterForNotificationObservation;
- (void)_uninstallSyncYieldTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (id)btaJobName;
- (void)_periodicRefreshTimerFired:(id)a0;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)_installSyncYieldTimer;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (BOOL)_authorizedToAcquireLocation;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)_eventKitFeatureSetChanged;
- (void)_suggestEventLocationsSettingChanged;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_updateDatabaseEncryptionState;

@end
