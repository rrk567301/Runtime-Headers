@interface OSPersonalizationController : NSObject

+ (id)sharedController;
+ (id)_pickVariantsForManifestRootTypes:(id)a0;

- (BOOL)personalizationRequired;
- (BOOL)networkAvailableForPersonalization;
- (BOOL)networkAvailableForPersonalizationWithOptions:(id)a0;
- (BOOL)personalizationRequiredForVolumeAtMountPoint:(id)a0;
- (BOOL)personalizationRequiredForInstallRootDirectory:(id)a0 targetVolumeMountPoint:(id)a1;
- (BOOL)volumeHasBeenPersonalized:(id)a0 prebootFolder:(id)a1;
- (id)requiredManifestPathsForBootFile:(id)a0;
- (BOOL)manifestHasInternalUseOnlyBuild:(id)a0 error:(id *)a1;
- (void)personalizeVolumeAtMountPoint:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)personalizeVolumeAtMountPoint:(id)a0 outputDirectory:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)personalizeVolumeAtMountPointForInstall:(id)a0 outputDirectory:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)personalizeVolumeAtMountPointForInstall:(id)a0 outputDirectory:(id)a1 options:(id)a2 completionHandlerWithResults:(id /* block */)a3;
- (void)personalizeBundleForInstall:(id)a0 targetVolumeMountPoint:(id)a1 outputDirectory:(id)a2 options:(id)a3 completionHandlerWithResults:(id /* block */)a4;
- (void)_personalizeBundleForInstall:(id)a0 volume:(id)a1 outputDirectory:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (id)_resultDictionaryWithRequest:(id)a0 sequenceNumber:(unsigned long long)a1;
- (id)_requiredManifestPathsForBootFile:(id)a0 device:(id)a1;
- (void)_personalizeBundle:(id)a0 outputDirectory:(id)a1 variant:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;

@end
