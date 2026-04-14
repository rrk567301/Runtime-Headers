@class NSMapTable;

@interface PHAssociatedObjectsTable : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locks[16];
    NSMapTable *_buckets[16];
}

@property (readonly) long long stripeCount;

- (void)setAssociatedObject:(id)a0 onObject:(id)a1 forKey:(id)a2;
- (id)associatedObjectOnObject:(id)a0 forKey:(id)a1;
- (void)removeAllAssociatedObjectsOnObject:(id)a0;
- (void).cxx_destruct;
- (void)removeAssociatedObjectOnObject:(id)a0 forKey:(id)a1;
- (id)setAssociatedObjectIfNotSet:(id)a0 onObject:(id)a1 forKey:(id)a2;
- (id)init;

@end
