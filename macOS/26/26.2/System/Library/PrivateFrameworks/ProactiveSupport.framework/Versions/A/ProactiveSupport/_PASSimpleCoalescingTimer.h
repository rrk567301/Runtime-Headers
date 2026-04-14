@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer *_timer;
}

- (void)runImmediately;
- (void).cxx_destruct;
- (void)runAfterDelaySeconds:(double)a0 coalescingBehavior:(unsigned char)a1;
- (id)initWithQueue:(id)a0 leewaySeconds:(double)a1 operation:(id /* block */)a2;
- (id)initWithQueue:(id)a0 operation:(id /* block */)a1;
- (void)runAfterStrictDelaySeconds:(double)a0;
- (void)cancelPendingOperations;

@end
