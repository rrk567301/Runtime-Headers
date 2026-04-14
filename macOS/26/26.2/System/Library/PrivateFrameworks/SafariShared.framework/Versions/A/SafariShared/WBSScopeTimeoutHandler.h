@interface WBSScopeTimeoutHandler : NSObject {
    id /* block */ _handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
