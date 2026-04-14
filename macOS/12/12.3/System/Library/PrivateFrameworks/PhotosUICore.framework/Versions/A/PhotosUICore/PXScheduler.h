@interface PXScheduler : NSObject

+ (id)sharedScheduler;

- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;

@end
