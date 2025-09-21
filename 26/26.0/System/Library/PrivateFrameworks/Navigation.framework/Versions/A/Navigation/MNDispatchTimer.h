@interface MNDispatchTimer : NSObject {
    void /* unknown type, empty encoding */ _internalTimer;
    void /* unknown type, empty encoding */ _isRunning;
}

- (void)dealloc;
- (void)cancel;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithTime:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithTime:(double)a0 repeating:(BOOL)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
