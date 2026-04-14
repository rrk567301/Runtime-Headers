@class NSString, NSMutableDictionary, NSMutableArray;

@interface WBSSavedAccountTreeMatch : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSMutableDictionary *accountStoreTreeMatchingSearchCriteria;
@property (readonly, nonatomic) long long matchLevel;
@property (readonly, nonatomic) NSMutableArray *flattenedSavedAccountsFromTree;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 savedAccountTree:(id)a1 matchLevel:(long long)a2;
- (void)pruneEmptyUsernameTrees;
- (void)pruneDontSaveTrees;
- (void)pruneUsernameTreesNotMatchingPartialUsername:(id)a0;
- (void)pruneTreesWithoutPasswordOrMatchingPasskeyIdentifiers:(id)a0;

@end
