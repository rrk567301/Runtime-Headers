@class OS_dispatch_queue, LACConcurrentEvaluationHelper, LACConcurrentIdleUIListenerProvider;
@protocol LACConcurrentEvaluationManaging;

@interface LACConcurrentEvaluationController : NSObject <LACConcurrentEvaluationManagerObserver, LACConcurrentEvaluationControlling, LACEvaluationRequestProcessor> {
    void /* unknown type, empty encoding */ stashedRequests;
}

@property (nonatomic, readonly) LACConcurrentEvaluationHelper *helper;
@property (nonatomic, readonly) id<LACConcurrentEvaluationManaging> manager;
@property (nonatomic, readonly) LACConcurrentIdleUIListenerProvider *idleUIListenerProvider;
@property (nonatomic, readonly) OS_dispatch_queue *replyQueue;

- (void).cxx_destruct;
- (id)init;
- (void)systemDidCancelRequest:(id)a0 manager:(id)a1;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithHelper:(id)a0 manager:(id)a1 replyQueue:(id)a2;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)systemReadyForRequest:(id)a0 manager:(id)a1;

@end
