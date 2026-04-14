@class NSArray, NSHashTable, NSObject, PFCoalescer;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PFCoalescerContext : NSObject

@property (weak) PFCoalescer *coalescer;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSHashTable *pendingActivityTokens;
@property (readonly) NSArray *pendingActivityTokensSnapshot;
@property unsigned long long coalescedUpdatesCount;

- (void)pushBack:(id /* block */)a0;
- (id)initWithCoalescer:(id)a0;
- (void)cancelPendingActivityTokens;
- (id)activityToken;
- (void).cxx_destruct;
- (id)activityTokenWithReason:(id)a0;
- (void)delayNextInvocationByTimeInterval:(double)a0;
- (void)notifyActivityTokenCompletionOnQueue:(id)a0 handler:(id /* block */)a1;

@end
