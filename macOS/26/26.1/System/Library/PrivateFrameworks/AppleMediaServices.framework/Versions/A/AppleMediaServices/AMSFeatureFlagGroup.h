@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (void)resetAllFlagGroups;
+ (id)allFlagGroups;
+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;

- (id)testableFlags;
- (id)allITFEs;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (id)fetchAllGroupKeys;
- (void)appendFlag:(id)a0;
- (id)initWithName:(id)a0 domain:(id)a1;
- (id)_completedFlags;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (id)flagsForDevelopmentPhase:(long long)a0;
- (id)developmentFlags;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (id)flagsForType:(long long)a0;
- (void)activateITFEs;
- (id)completedFlags;
- (void)reset;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;
- (id)initWithName:(id)a0;
- (id)_developmentFlags;
- (void).cxx_destruct;
- (id)_testableFlags;
- (id)_groupKeyForType:(long long)a0;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;

@end
