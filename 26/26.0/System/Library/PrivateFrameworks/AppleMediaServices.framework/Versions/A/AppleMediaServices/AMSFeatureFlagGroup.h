@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;
+ (id)allFlagGroups;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (void)resetAllFlagGroups;

- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;
- (void)reset;
- (id)completedFlags;
- (id)testableFlags;
- (id)fetchAllGroupKeys;
- (id)allITFEs;
- (void)appendFlag:(id)a0;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (id)_groupKeyForType:(long long)a0;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (void)activateITFEs;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (id)_completedFlags;
- (id)_testableFlags;
- (id)_developmentFlags;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 domain:(id)a1;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (id)developmentFlags;
- (id)flagsForType:(long long)a0;
- (id)flagsForDevelopmentPhase:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;

@end
