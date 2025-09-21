@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_contexts;
}

- (id)allContexts;
- (id)init;
- (id)allContextsNotIdenticalTo:(id)a0;
- (void)addContext:(id)a0;
- (void).cxx_destruct;

@end
