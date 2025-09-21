@class NSArray, WBSPasskeyAutoFillFromNearbyDeviceOptions;

@interface WBSSavedAccountMatchResult : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *exactMatches;
@property (readonly, copy, nonatomic) NSArray *potentialMatches;
@property (readonly, copy, nonatomic) NSArray *associatedDomainMatches;
@property (readonly, copy, nonatomic) NSArray *matchesForPasswordAutoFill;
@property (readonly, copy, nonatomic) NSArray *orderedMatches;
@property (readonly, copy, nonatomic) WBSPasskeyAutoFillFromNearbyDeviceOptions *nearbyDeviceOptions;

+ (BOOL)shouldEvaluateAccountsToConsiderEquivalentForUserName:(id)a0 atURL:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)accountsToConsiderEquivalentForUserName:(id)a0 atURL:(id)a1;
- (void)addUniqueHostUserToMatches;
- (id)initWithExactMatches:(id)a0 potentialMatches:(id)a1 associatedDomainMatches:(id)a2 nearbyDeviceOptions:(id)a3;

@end
