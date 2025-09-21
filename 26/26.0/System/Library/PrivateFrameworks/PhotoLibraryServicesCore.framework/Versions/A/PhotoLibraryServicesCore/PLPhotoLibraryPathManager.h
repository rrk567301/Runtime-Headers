@class NSString, NSURL, PLPhotoLibraryPathManagerCore, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
    unsigned char _format;
}

@property (readonly) BOOL isUBF;
@property (readonly) BOOL isDCIM;
@property (readonly) unsigned short bundleScope;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSString *baseDirectory;
@property (readonly) PLFileSystemCapabilities *capabilities;
@property (readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootURLForPhotoLibraryDomain:(long long)a0;
+ (BOOL)isSystemPhotoLibraryURL:(id)a0;
+ (id)allPhotosPathsOnThisDevice;
+ (BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)photosLibraryExtension;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)a0;
+ (long long)wellKnownPhotoLibraryIdentifierForURL:(id)a0;
+ (id)systemLibraryURL;
+ (BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)a0;
+ (BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)photosLibrariesDataVaultPath;
+ (id)libraryURLFromDatabaseURL:(id)a0;
+ (id)photosLibraryTombstoneExtension;
+ (id)managedPathWithUuid:(const char *)a0 base:(const char *)a1 fileMarker:(const char *)a2 extension:(const char *)a3;
+ (id)systemLibraryBaseDirectory;
+ (BOOL)setSystemLibraryURL:(id)a0 options:(unsigned short)a1 error:(id *)a2;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)assertSingleLibraryMode;
+ (void)enableMultiLibraryMode;
+ (id)systemLibraryPathManager;
+ (BOOL)bundleScopeShouldBePersistedForRebuild:(unsigned short)a0;
+ (BOOL)_isTimeMachineURL:(id)a0;
+ (BOOL)isHFSTimeMachineURL:(id)a0;
+ (void)throwMultiLibraryAPIMisuse;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1;
- (void).cxx_destruct;
- (id)initWithLibraryURL:(id)a0;
- (id)redactedDescription;
- (BOOL)isLibraryInTimeMachineLocation;
- (id)rebuildHistoryFilePath;
- (id)relocatedOriginalDirectoriesWithError:(id *)a0;
- (void)resetBackupExclusionPathsForBackupType:(long long)a0;
- (id)sqliteErrorIndicatorFilePath;
- (void)updateBackupExclusionPathsForBackupType:(long long)a0;
- (unsigned char)_bundleFormatFromLibraryURL:(id)a0 libraryFormat:(unsigned char)a1;
- (id)_commonPathsToExcludeFromTimeMachineAndICloudBackups;
- (id)_existingPrivateCacheDirectoriesToExclude;
- (id)_pathsToExcludeFromAllBackups;
- (id)_pathsToExcludeFromICloudBackups;
- (id)_pathsToExcludeFromICloudBackupsWithICPLEnabled;
- (id)_pathsToExcludeFromTimeMachineBackups;
- (id)_pathsToExplicitlyIncludeInAllBackups;
- (id)initWithBaseDirectory:(id)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1 libraryFormat:(unsigned char)a2;
- (BOOL)isValidRelocatedOriginalsDirName:(id)a0;
- (void)setBackupExclusionAttributesForWellKnownLibrariesOrWithCreateOptions:(unsigned long long)a0 andBackupType:(long long)a1;
- (void)setOrCompareLibraryURL:(id)a0;

@end
