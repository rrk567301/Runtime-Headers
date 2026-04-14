@class NSDictionary;

@interface RMProfilesAdapter : NSObject

@property (nonatomic) BOOL isSystemScope;
@property (retain) NSDictionary *profileNameForIdentifier;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)profileNameForIdentifier:(id)a0;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_installOptionsForStore:(id)a0 declarationKey:(id)a1;
- (id)_personaIDForStore:(id)a0;
- (BOOL)_isUserApprovedMDM;
- (BOOL)_canInstallProfile:(id)a0 error:(id *)a1;
- (id)_disallowedPayloadTypes;

@end
