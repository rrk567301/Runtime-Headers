@class NSNumber, PKCatalogGroup, NSMutableDictionary;
@protocol PKGroupDelegate;

@interface PKGroup : NSObject {
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passes;
    NSMutableDictionary *_states;
    NSMutableDictionary *_accounts;
    BOOL _local;
}

@property (weak, nonatomic) id<PKGroupDelegate> delegate;
@property (nonatomic) unsigned long long frontmostPassIndex;
@property (readonly, nonatomic) NSNumber *groupID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)passCount;
- (id)passes;
- (id)associatedAccountForPassAtIndex:(unsigned long long)a0;
- (id)associatedAccountForPassUniqueID:(id)a0;
- (unsigned long long)indexForPassUniqueID:(id)a0;
- (id)passAtIndex:(unsigned long long)a0;
- (id)stateAtIndex:(unsigned long long)a0;

@end
