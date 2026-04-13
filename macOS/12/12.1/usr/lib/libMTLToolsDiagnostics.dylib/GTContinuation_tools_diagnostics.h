@interface GTContinuation_tools_diagnostics : NSObject {
    struct dispatch_queue_s { } *queue;
    id /* block */ block;
    BOOL cancelled;
}

- (void)dealloc;
- (id)init;
- (void)dispatch;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;

@end
