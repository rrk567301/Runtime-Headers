@class NSString, NSDictionary, NSArray;

@interface AMSFeatureFlag : NSObject

@property (nonatomic, getter=isCodeComplete) char codeComplete;
@property (copy, nonatomic) NSString *ITFE;
@property (nonatomic, getter=isTestable) char testable;
@property (nonatomic, getter=isHidden) char hidden;
@property (copy, nonatomic) NSString *associatedGroup;
@property (nonatomic, getter=isDefaultEnabled) char defaultEnabled;
@property (nonatomic) long long developmentPhase;
@property (nonatomic, getter=isEnabled) char enabled;
@property (copy, nonatomic) NSString *feature;
@property (retain, nonatomic) NSDictionary *flagData;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *featureDescription;
@property (copy, nonatomic) NSString *flagGroup;
@property (retain, nonatomic) NSArray *itfes;
@property (nonatomic, getter=isUserEnabled) char userEnabled;
@property (readonly, nonatomic, getter=isRemote) char remote;

+ (id)allFlagGroups;
+ (char)disableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (char)disableFlagGroup:(id)a0 error:(id *)a1;
+ (char)enableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (char)enableFlagGroup:(id)a0 error:(id *)a1;
+ (id)flagForFeature:(id)a0 domain:(id)a1;
+ (id)flagForFeature:(id)a0 domain:(id)a1 searchDirectory:(id)a2;
+ (id)flagGroupWithName:(id)a0;

- (void).cxx_destruct;
- (long long)groupType;
- (long long)_developmentPhaseFromGroupType:(long long)a0;
- (void)_activateFlag;
- (void)_disableITFEs;
- (void)_enableITFEs;
- (void)_updateDevelopmentPhase;
- (void)_updateInternalEnabledState;
- (void)_updateUserEnabled:(char)a0;
- (void)activateITFEs;
- (char)hasITFEWithName:(id)a0;
- (char)hasITFEs;
- (id)initWithFlagData:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2 feature:(id)a3 domain:(id)a4;
- (id)itfesFromString:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2;

@end
