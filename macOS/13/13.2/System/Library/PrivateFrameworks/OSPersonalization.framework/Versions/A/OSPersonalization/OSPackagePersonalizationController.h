@interface OSPackagePersonalizationController : NSObject

+ (id)sharedController;

- (BOOL)personalizationRequiredForPackageSpecifiers:(id)a0;
- (void)personalizePackageSpecifiersForInstall:(id)a0 outputDirectory:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_recommendedFirmwareBundleComponentInSpecifiers:(id)a0;
- (BOOL)_extractFirmwareBundleComponentFromPackage:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
