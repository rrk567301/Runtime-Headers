@class NSObject;
@protocol ABWorkQueueDelegate, CNScheduler;

@interface ABWorkQueue : NSOperationQueue

@property (readonly, nonatomic) id<CNScheduler> delegateScheduler;
@property (retain) NSObject<ABWorkQueueDelegate> *delegate;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)dealloc;
- (void)operationCountDidChange:(unsigned long long)a0;

@end
