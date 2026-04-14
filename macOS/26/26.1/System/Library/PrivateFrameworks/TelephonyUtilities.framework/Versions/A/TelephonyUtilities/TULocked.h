@interface TULocked : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    id _object;
}

- (void)setObject:(id)a0;
- (id)object;
- (id)initWithObject:(id)a0;
- (id)description;
- (void)performWhileLocked:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned int x1; } *)unfairLockForTesting;

@end
