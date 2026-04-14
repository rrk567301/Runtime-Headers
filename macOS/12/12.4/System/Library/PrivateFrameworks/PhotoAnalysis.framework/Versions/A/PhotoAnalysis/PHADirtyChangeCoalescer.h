@class PFCoalescer, NSObject;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
}

@property (weak, nonatomic) id<PHADirtyChangeCoalescerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)recordDirtyTransitionForAssetIdentifier:(id)a0 workerType:(short)a1 workerFlags:(int)a2;

@end
