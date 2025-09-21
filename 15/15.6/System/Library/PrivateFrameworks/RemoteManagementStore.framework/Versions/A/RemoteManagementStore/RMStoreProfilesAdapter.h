@class NSDictionary;

@interface RMStoreProfilesAdapter : NSObject

@property (nonatomic) char isSystemScope;
@property (retain) NSDictionary *profileNameForIdentifier;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0;
- (id)allProfileIdentifiers;
- (id)_allInstalledProfilesReturningError:(id *)a0 rmOnly:(char)a1;
- (id)_allowedErSSOPayloadTypes;
- (char)_allowedPayloadType:(id)a0 store:(id)a1;
- (char)_canAssumeOwnershipOfProfile:(id)a0 newProfile:(id)a1 newDeclarationKey:(id)a2 store:(id)a3;
- (char)_canInstallProfile:(id)a0 store:(id)a1 declarationKey:(id)a2 outAssumeOwnership:(char *)a3 error:(id *)a4;
- (char)_canReplaceProfile:(id)a0 newProfile:(id)a1 newDeclarationKey:(id)a2 store:(id)a3 outAssumeOwnership:(char *)a4 error:(id *)a5;
- (char)_canUninstallProfileWithIdentifier:(id)a0 store:(id)a1 error:(id *)a2;
- (id)_declarationKeyForProfile:(id)a0;
- (id)_declarationKeyForUserInfo:(id)a0;
- (id)_disallowedPayloadTypes;
- (id)_installOptionsForStore:(id)a0 declarationKey:(id)a1 assumeOwnership:(char)a2;
- (id)_installProfileData:(id)a0 options:(id)a1 error:(id *)a2;
- (char)_isManagedByMDM:(id)a0;
- (char)_isUserApprovedMDM;
- (id)_payloadStructure:(id)a0;
- (id)_personaIDForStore:(id)a0;
- (id)_profileForIdentifier:(id)a0 rmOnly:(char)a1;
- (char)_removeProfileWithIdentifier:(id)a0 error:(id *)a1;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)profileNameForIdentifier:(id)a0;
- (void)uninstallProfileWithIdentifier:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;

@end
