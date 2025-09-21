@class NSHashTable;

@interface LACThreadSafeCollection : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _objectsLock;
    BOOL _weakObjects;
}

+ (id)strongObjectsCollection;
+ (id)weakObjectsCollection;

- (void)remove:(id)a0;
- (long long)count;
- (void).cxx_destruct;
- (void)forEach:(id /* block */)a0;
- (void)append:(id)a0;
- (void)_synchronizedObjects:(id /* block */)a0;
- (id)initWithWeakObjects:(BOOL)a0;

@end
