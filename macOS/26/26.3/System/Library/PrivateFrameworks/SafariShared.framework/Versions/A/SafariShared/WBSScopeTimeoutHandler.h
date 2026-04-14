@interface WBSScopeTimeoutHandler : NSObject {
    id /* block */ _handler;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
