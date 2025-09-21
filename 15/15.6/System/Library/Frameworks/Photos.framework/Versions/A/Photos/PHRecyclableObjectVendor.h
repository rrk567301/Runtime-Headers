@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject {
    NSMutableArray *_recycledObjects;
    Class _targetClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _repsondsToPrepareForReuse;
    char _threadSafe;
    id /* block */ _builder;
}

- (void).cxx_destruct;
- (id)dequeueRecyclableObject;
- (id)initWithTargetClass:(Class)a0 requiresThreadSafety:(char)a1 initialPoolSize:(long long)a2;
- (id)initWithTargetClass:(Class)a0 requiresThreadSafety:(char)a1 initialPoolSize:(long long)a2 prototypeStep:(id /* block */)a3;
- (void)recycleObject:(id)a0;

@end
