@interface SRResourcesManager : NSObject

+ (void)initialize;
+ (id)resourcePath;
+ (id)sharedResourcesManager;
+ (char)parsecEnabled;
+ (unsigned long long)lastLoadedContentVersion;
+ (id)defaultParameterWithType:(long long)a0 value:(id)a1 name:(id)a2;
+ (void)dumpParameterList:(id)a0;
+ (void)fetchOverrideList;
+ (void)fetchParameterList;
+ (void)fetchUserDefaults;
+ (long long)parameterTypeFromString:(id)a0;
+ (void)setTrialUpdateHandler;
+ (void)updateDefaultParameter:(id)a0 withValue:(id)a1;

- (id)initWithOptions:(id)a0;
- (void)loadAllParametersForClient:(id)a0;
- (id)resourcesForClient:(id)a0 options:(id)a1;
- (void)fetchAllParametersForLanguages:(id)a0;
- (id)allLoadedAssets;
- (id)assetConfigDump;
- (id)trialConfigDump;
- (void)handleAssetsCommand:(id)a0;
- (char)overrideFactor:(id)a0 client:(id)a1 type:(id)a2 value:(id)a3;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (id)resourcesForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (void)loadDataSource:(id)a0;
- (void)loadAllParameters;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1;
- (void)refreshTrialForClient:(id)a0;

@end
