@protocol RMConfigurationSingleAdapter;

@interface RMConfigurationSingleApplicator : NSObject

@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationSingleAdapter> adapter;

- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_beginProcessingWithScope:(long long)a0 error:(id *)a1;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (BOOL)_endProcessing:(BOOL)a0 scope:(long long)a1 error:(id *)a2;
- (id)_oldDeclarationKeysWithScope:(long long)a0 error:(id *)a1;
- (BOOL)_supportedConfigurationType:(id)a0;
- (BOOL)_unassignAssetReference:(id)a0 scope:(long long)a1 error:(id *)a2;
- (BOOL)_usesKeychain;

@end
