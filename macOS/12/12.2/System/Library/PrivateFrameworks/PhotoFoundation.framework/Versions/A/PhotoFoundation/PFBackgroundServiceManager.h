@class NSMutableDictionary, PFQoSPolicy, PFDispatchQueue, PFAsyncDispatchMulticaster;
@protocol PFWorkContextStatusUpdateMulticaster;

@interface PFBackgroundServiceManager : NSObject {
    PFDispatchQueue *_queue;
}

@property (readonly) PFDispatchQueue *registrationQueue;
@property (retain) NSMutableDictionary *workContexts;
@property (retain) PFAsyncDispatchMulticaster<PFWorkContextStatusUpdateMulticaster> *statusUpdateMulticaster;
@property (retain) PFQoSPolicy *qosPolicy;

+ (id)sharedInstance;
+ (void)addStatusReceiver:(id)a0;
+ (void)removeStatusReceiver:(id)a0;
+ (void)addWorkContext:(id)a0;
+ (id)qosLevelStringForServiceType:(id)a0;
+ (void)unregisterClient:(id)a0 forResource:(id)a1;
+ (id)beginActivityForResource:(id)a0 reason:(id)a1;
+ (void)endActivityForResourceToken:(id)a0;
+ (void)unregisterClientCompletely:(id)a0 forResource:(id)a1;
+ (BOOL)client:(id)a0 isRegisteredForResource:(id)a1;
+ (void)registerResource:(id)a0;
+ (void)tryResourceShutdown:(id)a0 ignoreClients:(id)a1 whenComplete:(id /* block */)a2;
+ (void)forceResourceShutdown:(id)a0 whenComplete:(id /* block */)a1;
+ (BOOL)registerClient:(id)a0 forResource:(id)a1;
+ (void)addManualWorkContext:(id)a0;
+ (void)removeManualWorkContext:(id)a0;
+ (void)closeWorkContext:(id)a0;
+ (void)terminateWorkContext:(id)a0;
+ (void)cancelWork:(id)a0 force:(BOOL)a1;
+ (void)suspendWork:(id)a0;
+ (void)resumeWork:(id)a0;
+ (void)addedItemsToWorkContext:(id)a0;
+ (id)performWorkWithDelegate:(id)a0 serviceType:(id)a1 atEnd:(id /* block */)a2;
+ (unsigned int)qosClassForServiceType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addWorkContext:(id)a0;
- (void)unregisterClient:(id)a0 forResource:(id)a1;
- (id)beginActivityForResource:(id)a0 reason:(id)a1;
- (void)endActivityForResourceToken:(id)a0;
- (void)unregisterClientCompletely:(id)a0 forResource:(id)a1;
- (BOOL)client:(id)a0 isRegisteredForResource:(id)a1;
- (void)registerResource:(id)a0;
- (void)tryResourceShutdown:(id)a0 ignoreClients:(id)a1 whenComplete:(id /* block */)a2;
- (void)forceResourceShutdown:(id)a0 whenComplete:(id /* block */)a1;
- (id)resourceContextForResource:(id)a0 create:(BOOL)a1;
- (BOOL)_registerClient:(id)a0 forResource:(id)a1 isToken:(BOOL)a2;
- (void)_unregisterClient:(id)a0 forResource:(id)a1 isToken:(BOOL)a2;
- (BOOL)registerClient:(id)a0 forResource:(id)a1;
- (void)dispatchAsync:(id /* block */)a0;
- (void)sendAddTask:(id)a0;
- (void)sendRemoveTask:(id)a0;
- (void)removeWorkContext:(id)a0 from:(id)a1;
- (id)workContextForId:(id)a0;
- (void)notifyParentOfCompletionOfChild:(id)a0;
- (BOOL)contextIsDormant:(id)a0;
- (BOOL)assertOnProcessingQueue;
- (const char *)processingQueueLabel;
- (void)addManualWorkContext:(id)a0;
- (void)removeManualWorkContext:(id)a0;
- (void)closeWorkContext:(id)a0;
- (void)terminateWorkContext:(id)a0;
- (void)cancelWork:(id)a0 force:(BOOL)a1;
- (void)cancelWorkContext:(id)a0;
- (void)suspendWork:(id)a0;
- (void)suspendWorkContext:(id)a0;
- (void)resumeWork:(id)a0;
- (void)resumeWorkContext:(id)a0;
- (void)beginWorkContext:(id)a0;
- (void)performNextStepForContext:(id)a0;
- (void)getNextBatchOrJobForContext:(id)a0;
- (void)requestNewBatchForWorkContext:(id)a0;
- (void)processNextJobInBatch:(id)a0 forWorkContext:(id)a1;
- (void)finishedEndBatchWork:(id)a0 seq:(long long)a1;
- (void)endWorkContext:(id)a0;
- (void)finishedEndWork:(id)a0 seq:(long long)a1;
- (void)workContextStalled:(id)a0;
- (void)addedItemsToWorkContext:(id)a0;

@end
