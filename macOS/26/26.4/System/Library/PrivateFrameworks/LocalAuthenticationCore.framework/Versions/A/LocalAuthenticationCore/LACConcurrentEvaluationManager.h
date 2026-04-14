@class OS_dispatch_queue, LACConcurrentEvaluationHelper;

@interface LACConcurrentEvaluationManager : NSObject <LACConcurrentEvaluationManaging, LACConcurrentIdleUIHandling, LACConcurrentIdleUIXPCHandling> {
    void /* unknown type, empty encoding */ activeRequests;
    void /* unknown type, empty encoding */ stashedRequests;
}

@property (nonatomic, readonly) LACConcurrentEvaluationHelper *helper;
@property (nonatomic, readonly) OS_dispatch_queue *replyQueue;
@property (nonatomic, retain) id observers;
@property (nonatomic, retain) id specializedObservers;
@property (nonatomic, retain) id connectedUIInstances;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasStashedRequestsForContextID:(id)a0;
- (void)addObserver:(id)a0 forRequest:(id)a1;
- (void)cancelRequestsForContextID:(id)a0;
- (void)connectIdleUI:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)connectionInvalidatedForIdentifier:(id)a0;
- (void)idleUIGotFocus:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithHelper:(id)a0 replyQueue:(id)a1;
- (void)registerRequest:(id)a0;
- (void)removeObserver:(id)a0 forRequest:(id)a1;
- (void)restartRequestsForContextID:(id)a0 unpauseEvents:(BOOL)a1;
- (void)stashRequest:(id)a0 acceptsIdleUI:(BOOL)a1;
- (void)unregisterRequest:(id)a0;

@end
