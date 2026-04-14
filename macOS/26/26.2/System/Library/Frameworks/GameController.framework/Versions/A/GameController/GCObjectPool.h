@class NSMutableArray;

@interface GCObjectPool : NSObject {
    NSMutableArray *objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)addObjectWith:(id /* block */)a0;
- (id)takeObjectOrCreateWith:(id /* block */)a0;

@end
