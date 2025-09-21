@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration> {
    NSMutableDictionary *_stateChangesByIdentity;
}

@property (readonly, nonatomic) char hasChanges;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithChanges:(id)a0;
- (void)applyChanges:(id)a0;
- (id)initWithOriginalStatesByIdentity:(id)a0 updatedStatesByIdentity:(id)a1;
- (id)processIdentities;
- (id)processStateChangeForIdentity:(id)a0;

@end
