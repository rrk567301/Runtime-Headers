@class NSDictionary;

@interface RMProfilesAdapter : NSObject

@property (nonatomic) BOOL amRunningAsDaemon;
@property (retain) NSDictionary *profileNameForIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)_allInstalledProfileIdentifiers;
- (id)_personaIDForStore:(id)a0;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)profileNameForIdentifier:(id)a0;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
