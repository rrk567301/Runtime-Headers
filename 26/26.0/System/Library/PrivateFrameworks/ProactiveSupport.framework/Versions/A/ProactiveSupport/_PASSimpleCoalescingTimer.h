@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer *_timer;
}

- (void)runAfterStrictDelaySeconds:(double)a0;
- (void)runAfterDelaySeconds:(double)a0 coalescingBehavior:(unsigned char)a1;
- (void)runImmediately;
- (id)initWithQueue:(id)a0 leewaySeconds:(double)a1 operation:(id /* block */)a2;
- (id)initWithQueue:(id)a0 operation:(id /* block */)a1;
- (void)cancelPendingOperations;
- (void).cxx_destruct;

@end
