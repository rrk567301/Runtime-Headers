@interface CalDatabaseWriteLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)writeLockForDatabasePath:(id)a0;
+ (id)canonicalizePath:(id)a0;

- (void)unlock;
- (id)init;
- (void)lock;
- (void)performWithWriteLock:(id /* block */)a0;

@end
