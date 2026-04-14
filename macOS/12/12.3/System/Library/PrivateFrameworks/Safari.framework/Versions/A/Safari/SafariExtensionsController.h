@interface SafariExtensionsController : WBSExtensionsController

- (id)init;
- (void)disableUnsignedExtensionsIfNecessary;
- (BOOL)extensionsEnabled;
- (void)_updateExtensionsCrashReporterMessage;
- (void)_updateExtensionStateIfPermissionsIncreased:(id)a0;
- (id)_computeCodeSigningDictionaryOnDiskForExtension:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (id)_developerIdentifierForExtension:(id)a0;
- (BOOL)_isExtensionBlockedByBlocklist:(id)a0 developerIdentifier:(id)a1;
- (void)_replaceExtensionsObsoletedByExtension:(id)a0 developerIdentifier:(id)a1;
- (void)_validateContainingAppOfExtensionIfNecessary:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (void)_showNewExtensionBannerIfNecessaryForExtensions:(id)a0;

@end
