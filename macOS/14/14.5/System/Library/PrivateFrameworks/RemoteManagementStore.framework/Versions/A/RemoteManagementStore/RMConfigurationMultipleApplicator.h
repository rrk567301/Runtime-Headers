@protocol RMConfigurationMultipleAdapter;

@interface RMConfigurationMultipleApplicator : NSObject

@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationMultipleAdapter> adapter;
@property (nonatomic) BOOL inPlaceUpdates;
@property (nonatomic) BOOL removeBeforeApply;

- (void).cxx_destruct;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithAdapter:(id)a0 inPlaceUpdates:(BOOL)a1;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_beginProcessingWithScope:(long long)a0 error:(id *)a1;
- (void)_cleanupDeclarationKeysIfNeeded:(id)a0 scope:(long long)a1 actionGroup:(id)a2;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (BOOL)_endProcessing:(BOOL)a0 scope:(long long)a1 error:(id *)a2;
- (void)_installDeclarationKeys:(id)a0 scope:(long long)a1 configurations:(id)a2 actionGroup:(id)a3;
- (id)_oldDeclarationKeysWithScope:(long long)a0 error:(id *)a1;
- (BOOL)_supportedConfigurationType:(id)a0;
- (BOOL)_unassignAssetReference:(id)a0 scope:(long long)a1 error:(id *)a2;
- (void)_uninstallDeclarationKeys:(id)a0 scope:(long long)a1 actionGroup:(id)a2;
- (BOOL)_usesKeychain;

@end
