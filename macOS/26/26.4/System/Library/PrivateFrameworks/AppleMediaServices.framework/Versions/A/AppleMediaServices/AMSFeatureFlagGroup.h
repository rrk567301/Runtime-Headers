@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (id)allFlagGroups;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (void)resetAllFlagGroups;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;

- (id)_developmentFlags;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;
- (id)_testableFlags;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (id)_groupKeyForType:(long long)a0;
- (id)allITFEs;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (id)completedFlags;
- (void)activateITFEs;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (id)testableFlags;
- (id)flagsForType:(long long)a0;
- (id)developmentFlags;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (void)appendFlag:(id)a0;
- (id)initWithName:(id)a0 domain:(id)a1;
- (void).cxx_destruct;
- (id)_completedFlags;
- (id)fetchAllGroupKeys;
- (id)initWithName:(id)a0;
- (void)reset;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (id)flagsForDevelopmentPhase:(long long)a0;

@end
