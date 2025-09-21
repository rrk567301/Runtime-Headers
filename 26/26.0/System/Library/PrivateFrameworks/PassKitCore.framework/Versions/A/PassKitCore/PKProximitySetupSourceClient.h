@interface PKProximitySetupSourceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isValid;
    BOOL _bootstrapped;
}

- (void)invalidate;
- (id)init;
- (BOOL)startWithSession:(id)a0;

@end
