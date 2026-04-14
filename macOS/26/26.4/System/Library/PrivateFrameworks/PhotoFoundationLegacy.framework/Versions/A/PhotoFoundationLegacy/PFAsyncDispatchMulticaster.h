@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (void)resume;
- (void)suspend;
- (void).cxx_destruct;
- (id)init;
- (id)_defaultDistributionQueue;
- (void)_distributeAsyncDispatchSelector:(SEL)a0 to:(id)a1 distributionBlock:(id /* block */)a2;
- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (void)flushMessagesAndNotify:(id /* block */)a0;

@end
