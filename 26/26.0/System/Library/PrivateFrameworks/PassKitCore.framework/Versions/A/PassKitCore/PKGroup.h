@class PKCatalogGroup, NSMutableDictionary, NSHashTable, NSNumber;

@interface PKGroup : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passes;
    NSMutableDictionary *_states;
    BOOL _local;
}

@property (nonatomic) unsigned long long frontmostPassIndex;
@property (readonly, nonatomic) NSNumber *groupID;

- (id)passes;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)passCount;
- (void)addGroupObserver:(id)a0;
- (unsigned long long)indexForPassUniqueID:(id)a0;
- (id)passAtIndex:(unsigned long long)a0;
- (void)removeGroupObserver:(id)a0;
- (id)stateAtIndex:(unsigned long long)a0;
- (id)stateForPassUniqueID:(id)a0;

@end
