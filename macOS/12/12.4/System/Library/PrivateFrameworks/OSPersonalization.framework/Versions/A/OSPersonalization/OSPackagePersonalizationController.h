@interface OSPackagePersonalizationController : NSObject

+ (id)sharedController;

- (void)personalizePackageSpecifiersForInstall:(id)a0 outputDirectory:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)personalizationRequiredForPackageSpecifiers:(id)a0;
- (id)_recommendedFirmwareBundleComponentInSpecifiers:(id)a0;
- (BOOL)_extractFirmwareBundleComponentFromPackage:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
