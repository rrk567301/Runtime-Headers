@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface HDMirroredWorkoutSessionServer : HDWorkoutSessionServer {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _sessionState;
    BOOL _hasActiveLiveActivity;
    NSObject<OS_dispatch_source> *_periodicRuntimeSource;
    NSMutableArray *_pendingClientUpdates;
}

- (void)dealloc;
- (void).cxx_destruct;
- (long long)state;
- (long long)sessionType;
- (BOOL)shouldStopPreviousSession;
- (BOOL)endCurrentActivityOnDate:(id)a0 error:(id *)a1;
- (void)syncCurrentActivity:(id)a0 completion:(id /* block */)a1;
- (void)_enqueueClientUpdate:(id /* block */)a0 launchClient:(BOOL)a1 waitForClientSetup:(BOOL)a2;
- (void)_executeClientUpdate:(id /* block */)a0;
- (void)_flushPendingDataRequests;
- (void)_launchClientInTheBackground;
- (BOOL)_queue_clientApplicationCanStartWorkoutSessionWithError:(id *)a0;
- (void)_schedulePeriodicRuntime;
- (BOOL)beginNewActivityWithConfiguration:(id)a0 date:(id)a1 metadata:(id)a2 error:(id *)a3;
- (void)didDisconnectFromRemoteWithError:(id)a0;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 configuration:(id)a1 sessionUUID:(id)a2 globalState:(id)a3 clientBundleIdentifier:(id)a4;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (BOOL)setTargetState:(long long)a0 date:(id)a1 error:(id *)a2;
- (void)setTaskServer:(id)a0;
- (void)syncSessionEvent:(long long)a0 date:(id)a1;
- (void)syncTransitionToState:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)syncWorkoutEvents:(id)a0 completion:(id /* block */)a1;

@end
