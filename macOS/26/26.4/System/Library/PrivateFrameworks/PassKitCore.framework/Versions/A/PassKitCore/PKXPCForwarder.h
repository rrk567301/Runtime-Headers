@interface PKXPCForwarder : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _invalidated;
    id _target;
    Class _targetClass;
}

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;

@end
