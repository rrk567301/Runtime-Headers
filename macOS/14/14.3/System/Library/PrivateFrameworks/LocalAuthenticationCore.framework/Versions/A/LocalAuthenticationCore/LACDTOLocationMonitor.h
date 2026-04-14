@class NSString, LACDTOLocationState, LACBackgroundTask, NSObject, LACTimer;
@protocol LACDTOEventBus, LACDTOLocationProvider, OS_dispatch_queue, LACDTOKVStore;

@interface LACDTOLocationMonitor : NSObject <LACDTOLocationProvider, LACDTOEventProducer, LACDTOPendingPolicyEvaluationControllerObserver> {
    id<LACDTOLocationProvider> _locationProvider;
    id<LACDTOKVStore> _store;
    LACTimer *_timer;
}

@property (retain, nonatomic) LACDTOLocationState *locationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) LACBackgroundTask *locationStateBackgroundTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<LACDTOEventBus> eventBus;

- (void).cxx_destruct;
- (id)_locationStateFromBackgroundTaskResult:(id)a0;
- (void)_runLocationStateBackgroundTask:(double)a0 completion:(id /* block */)a1;
- (void)_startMonitoringWithReason:(id)a0;
- (void)_stopMonitoringWithReason:(id)a0;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)a0;
- (id)initWithLocationProvider:(id)a0 store:(id)a1 workQueue:(id)a2;
- (void)pendingEvaluationController:(id)a0 updatedPendingEvaluation:(id)a1;
- (void)pendingEvaluationControllerDidStartTrackingPendingEvaluations:(id)a0;
- (void)pendingEvaluationControllerDidStopTrackingPendingEvaluations:(id)a0;

@end
