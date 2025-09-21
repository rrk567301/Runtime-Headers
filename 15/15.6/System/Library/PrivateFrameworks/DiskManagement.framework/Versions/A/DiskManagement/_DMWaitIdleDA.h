@interface _DMWaitIdleDA : NSObject {
    double _givenTimeout;
    struct __DASession { } *_givenDASession;
    char _currentDAIdle;
}

+ (void)waitForDAIdleWithDASession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2 didGoIdle:(char *)a3;

- (void)dealloc;
- (id)init;

@end
