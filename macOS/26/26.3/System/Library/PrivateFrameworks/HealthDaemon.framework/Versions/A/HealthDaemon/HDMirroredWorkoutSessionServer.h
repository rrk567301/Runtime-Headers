@class NSString, HDAssertion, NSObject, NSMutableArray;
@protocol OS_dispatch_source;

@interface HDMirroredWorkoutSessionServer : HDWorkoutSessionServer <HDProcessStateObserver, HDRapportMessengerNearbyDeviceObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _sessionState;
    BOOL _hasActiveLiveActivity;
    NSObject<OS_dispatch_source> *_periodicRuntimeSource;
    HDAssertion *_backgroundRunningAssertion;
    BOOL _isBackgroundAssertionFeatureEnabled;
    BOOL _isBacklightOn;
    NSObject<OS_dispatch_source> *_disconnectionTimeoutSource;
    NSObject<OS_dispatch_source> *_nearbyDeviceOutOfRangeTimeoutSource;
    NSMutableArray *_pendingClientUpdates;
    NSMutableArray *_pendingData;
    BOOL _lock_postMirroringClientStartHandlerCalled;
    BOOL _lock_isTearingDown;
    NSString *_connectedDeviceIDSIdentifier;
}

@property (copy, nonatomic) id /* block */ unitTest_didExecuteClientDataUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processDidEnterForeground:(id)a0;
- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)sessionType;
- (void)processDidEnterBackground:(id)a0;
- (BOOL)shouldStopPreviousSession;
- (void)syncCurrentActivity:(id)a0 completion:(id /* block */)a1;
- (void)_launchClientInTheBackgroundAndTakeBackgroundAssertionIfNeeded:(BOOL)a0;
- (BOOL)endCurrentActivityOnDate:(id)a0 error:(id *)a1;
- (void)_cancelDisconnectTimerIfNeeded;
- (void)_cancelNearbyDeviceTimeoutTimerIfNeeded;
- (void)_enqueueClientUpdate:(id /* block */)a0 launchClient:(BOOL)a1 waitForClientSetup:(BOOL)a2;
- (void)_executeClientDataUpdate:(id)a0 completion:(id /* block */)a1;
- (void)_executeClientUpdate:(id /* block */)a0;
- (void)_flushPendingClientUpdates;
- (void)_flushPendingData;
- (void)_flushPendingDataRequests;
- (BOOL)_queue_clientApplicationCanStartWorkoutSessionWithError:(id *)a0;
- (void)_scheduleNearbyDeviceTimeoutTimer;
- (void)_scheduleNearbyDeviceTimeoutTimerIfNeeded;
- (void)_schedulePeriodicRuntime;
- (void)_setupProcessStateManagerObserver;
- (void)_takeBackgroundRunningAssertionIfNeeded;
- (BOOL)beginNewActivityWithConfiguration:(id)a0 date:(id)a1 metadata:(id)a2 error:(id *)a3;
- (void)didDisconnectFromRemoteWithError:(id)a0;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)disconnectFromRemoteTimerFired;
- (id)initWithProfile:(id)a0 configuration:(id)a1 sessionUUID:(id)a2 globalState:(id)a3 clientBundleIdentifier:(id)a4 connectedDeviceIDSIdentifier:(id)a5;
- (BOOL)isFirstPartyClient;
- (double)nearbyDeviceTimeoutInterval;
- (void)rapportMessengerNearbyDeviceFoundWithIdentifier:(id)a0;
- (void)rapportMessengerNearbyDeviceLostWithIdentifier:(id)a0;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (void)runSetupPostClientMirroringStartHandler;
- (BOOL)setTargetState:(long long)a0 date:(id)a1 error:(id *)a2;
- (void)setTaskServer:(id)a0;
- (void)syncSessionEvent:(long long)a0 date:(id)a1;
- (void)syncTransitionToState:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)syncWorkoutEvents:(id)a0 completion:(id /* block */)a1;
- (void)unit_test_setConnectedDeviceIDSIdentifier:(id)a0;

@end
