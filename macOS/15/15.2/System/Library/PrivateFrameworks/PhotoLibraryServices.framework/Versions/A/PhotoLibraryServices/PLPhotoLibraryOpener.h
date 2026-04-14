@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (id)_resolvePhotoLibraryBundleURLWithOptions:(id)a0 error:(id *)a1;
+ (BOOL)_validateUniqueLibraryIdentifierUUIDWithCreationOptions:(id)a0;
+ (BOOL)canAutomaticallyCreateLibrary;
+ (id)createManagedPhotoLibraryOnFilesystemWithOptions:(id)a0 error:(id *)a1;
+ (BOOL)deleteLibraryFromFilesystemAtURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(BOOL)a1;
- (BOOL)lightweightPermissionCheckWithError:(id *)a0;
- (BOOL)lightweightPermissionCheckWithPath:(id)a0 isDir:(BOOL)a1 error:(id *)a2;
- (BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:(BOOL)a0 autoCreate:(BOOL)a1 error:(id *)a2;

@end
