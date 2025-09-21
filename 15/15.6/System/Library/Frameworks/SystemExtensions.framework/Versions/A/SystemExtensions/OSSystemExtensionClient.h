@interface OSSystemExtensionClient : NSObject

- (char)willReplaceAppAtURL:(id)a0 with:(id)a1 error:(id *)a2;
- (unsigned long long)shouldDeleteAppAtURL:(id)a0;
- (unsigned long long)shouldMoveAppAtURL:(id)a0 toURL:(id)a1;
- (unsigned long long)shouldMoveAppToTrash:(id)a0;
- (unsigned long long)shouldReplaceAppAtURL:(id)a0 with:(id)a1;
- (char)willDeleteAppAtURL:(id)a0 error:(id *)a1;
- (char)continueCleanupForUninstall:(id)a0 bundleLocation:(id)a1 error:(id *)a2;
- (char)continueCleanupForUpgrade:(id)a0 bundleLocation:(id)a1 error:(id *)a2;
- (char)continueCleanupForUpgradeOrUninstall:(id)a0 bundleLocation:(id)a1 isUpgrade:(char)a2 error:(id *)a3;
- (char)developerMode:(char *)a0 error:(id *)a1;
- (id)listActiveExtensions:(id *)a0;
- (id)listActiveExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listAllExtensions:(id *)a0;
- (id)listAllExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listEnabledExtensions:(id *)a0;
- (id)listEnabledExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listPendingApprovalExtensions:(id *)a0;
- (id)listPendingApprovalExtensionsWithCategory:(id)a0 error:(id *)a1;
- (char)resetExtensionDatabase:(struct AuthorizationOpaqueRef { } *)a0 error:(id *)a1;
- (char)setDeveloperMode:(char)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (char)testing__routine:(id)a0 error:(id *)a1;
- (char)testing__routine:(id)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (char)uninstallExtension:(id)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (char)uninstallExtensionWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 withAuthorization:(struct AuthorizationOpaqueRef { } *)a2 error:(id *)a3;
- (char)updateExtensionWithInfo:(id)a0 error:(id *)a1;
- (id)updateExtensions:(id)a0;
- (char)willMoveAppAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)willMoveAppToTrash:(id)a0 error:(id *)a1;

@end
