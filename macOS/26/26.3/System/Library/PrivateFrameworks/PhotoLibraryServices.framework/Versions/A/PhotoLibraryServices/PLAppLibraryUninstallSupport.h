@class NSSet, NSDictionary, PLPhotoLibraryBundleController;

@interface PLAppLibraryUninstallSupport : NSObject {
    PLPhotoLibraryBundleController *_libraryBundleController;
}

@property (class, readonly) NSSet *applicationBundlesToValidateForUninstallCleanup;

@property (copy) NSDictionary *internalTestOptions;

- (void).cxx_destruct;
- (id)initWithLibraryBundleController:(id)a0;
- (void)handleApplicationUninstalledNotification:(id)a0;
- (void)_removeAppPhotoLibrariesForApplication:(id)a0;
- (id)_searchCriteriaWithApplicationBundleIdentifier:(id)a0;
- (void)deleteAbandonedLibrariesForApplicationWithBundleIdentifier:(id)a0;
- (id)scanForTombstonedLibrariesWithApplicationBundleIdentifier:(id)a0;

@end
