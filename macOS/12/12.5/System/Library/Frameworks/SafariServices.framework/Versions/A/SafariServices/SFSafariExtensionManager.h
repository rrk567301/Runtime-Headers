@interface SFSafariExtensionManager : NSObject

+ (id)sharedManager;
+ (void)getStateOfSafariExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_getLocalizedManifestFromExtensionAtURL:(id)a0 sandboxExtensionToken:(id)a1 completionHandler:(id /* block */)a2;

- (id)_composedIdentifierForStateOfExtensionWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
- (id)_legacyReadExtensionsStateFromKeychain;

@end
