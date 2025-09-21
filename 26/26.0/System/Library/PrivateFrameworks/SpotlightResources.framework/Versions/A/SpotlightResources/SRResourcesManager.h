@interface SRResourcesManager : NSObject

+ (void)initialize;
+ (BOOL)parsecEnabled;
+ (id)resourcePath;
+ (id)sharedResourcesManager;
+ (unsigned long long)lastLoadedBundleVersion;
+ (id)defaultParameterWithType:(long long)a0 value:(id)a1 name:(id)a2;
+ (void)dumpParameterList:(id)a0;
+ (void)fetchOverrideList;
+ (void)fetchParameterList;
+ (void)fetchUserDefaults;
+ (long long)parameterTypeFromString:(id)a0;
+ (void)setTrialUpdateHandler;
+ (id)trialOverrideList;
+ (id)trialParameterList;
+ (void)updateDefaultParameter:(id)a0 withValue:(id)a1;

- (id)initWithOptions:(id)a0;
- (void)handleAssetsCommand:(id)a0;
- (void)loadAllParametersForClient:(id)a0;
- (id)resourcesForClient:(id)a0 options:(id)a1;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (void)fetchAllParametersForLanguages:(id)a0;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1;
- (void)loadAllParametersForClient:(id)a0 locales:(id)a1 options:(id)a2;
- (id)resourcesForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (id)allLoadedAssets;
- (id)trialConfigDump;
- (id)assetConfigDump;
- (void)loadAllParameters;
- (void)loadDataSource:(id)a0 force:(BOOL)a1;
- (BOOL)overrideFactor:(id)a0 client:(id)a1 type:(id)a2 value:(id)a3;
- (void)refreshTrialForClient:(id)a0;

@end
