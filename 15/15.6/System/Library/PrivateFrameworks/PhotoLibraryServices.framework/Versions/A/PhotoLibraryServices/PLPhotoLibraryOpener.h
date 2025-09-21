@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    char _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (id)findPhotoLibraryIdentifiersMatchingSearchCriteria:(id)a0 error:(id *)a1;
+ (id)_autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)a0 libraryServicesManager:(id)a1 wellKnownLibraryIdentifier:(long long *)a2;
+ (char)_checkLibraryDeletionTombstoneForLibraryURL:(id)a0;
+ (char)_deleteLibraryFromFilesystemAtURL:(id)a0 shouldWriteTombstone:(char)a1 error:(id *)a2;
+ (char)_prepareLibraryForDeletionWithTombstone:(char)a0 libraryURL:(id)a1 error:(id *)a2;
+ (id)_resolvePhotoLibraryBundleURLWithOptions:(id)a0 error:(id *)a1;
+ (char)_validateUniqueLibraryIdentifierUUIDWithCreationOptions:(id)a0;
+ (id)autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)a0 libraryServicesManager:(id)a1 wellKnownLibraryIdentifier:(long long *)a2;
+ (char)canAutomaticallyCreateLibrary;
+ (id)createManagedPhotoLibraryOnFilesystemWithOptions:(id)a0 error:(id *)a1;
+ (char)deleteLibraryFromFilesystemAtURL:(id)a0 shouldWriteTombstone:(char)a1 error:(id *)a2;
+ (char)prepareLibraryForDeletionWithTombstone:(char)a0 libraryURL:(id)a1 error:(id *)a2;
+ (id)runningLibraryServicesManagerForPhotoLibraryURL:(id)a0 error:(id *)a1;
+ (id)runningLibraryServicesManagerForWellKnownPhotoLibraryIdentifier:(long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)_createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (char)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(char)a1;
- (char)lightweightPermissionCheckWithError:(id *)a0;
- (char)lightweightPermissionCheckWithPath:(id)a0 isDir:(char)a1 error:(id *)a2;
- (char)openPhotoLibraryDatabaseWithAutoUpgrade:(char)a0 autoCreate:(char)a1 error:(id *)a2;

@end
