@class NSDictionary;

@interface RMProfilesAdapter : NSObject

@property (nonatomic) BOOL isSystemScope;
@property (retain) NSDictionary *profileNameForIdentifier;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0;
- (BOOL)_canInstallProfile:(id)a0 error:(id *)a1;
- (id)_disallowedPayloadTypes;
- (id)_installOptionsForStore:(id)a0 declarationKey:(id)a1;
- (BOOL)_isUserApprovedMDM;
- (id)_personaIDForStore:(id)a0;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)profileNameForIdentifier:(id)a0;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
