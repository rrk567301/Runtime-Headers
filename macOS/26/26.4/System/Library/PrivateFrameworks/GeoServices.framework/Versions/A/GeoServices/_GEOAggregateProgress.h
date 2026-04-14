@class NSMutableArray;

@interface _GEOAggregateProgress : NSProgress {
    NSMutableArray *_observedChildren;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithTotalUnitCount:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addChild:(id)a0 withPendingUnitCount:(long long)a1;
- (void)_update;
- (void).cxx_destruct;
- (BOOL)isIndeterminate;
- (void)dealloc;
- (id)initWithParent:(id)a0 userInfo:(id)a1;

@end
