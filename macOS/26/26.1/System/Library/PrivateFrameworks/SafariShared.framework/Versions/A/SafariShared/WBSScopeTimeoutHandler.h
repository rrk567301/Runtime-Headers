@interface WBSScopeTimeoutHandler : NSObject {
    id /* block */ _handler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;
- (id)initWithTimeout:(double)a0 autoBugCaptureDomain:(id)a1 detectedProcess:(id)a2 context:(id)a3;

@end
