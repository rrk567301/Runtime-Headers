@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (void)suspend;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultDistributionQueue;
- (void)_distributeAsyncDispatchSelector:(SEL)a0 to:(id)a1 distributionBlock:(id /* block */)a2;
- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (void)flushMessagesAndNotify:(id /* block */)a0;

@end
