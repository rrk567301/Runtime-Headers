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

+ (long long)wellKnownPhotoLibraryIdentifierForURL:(id)a0;
+ (BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)systemLibraryPathManager;
+ (id)systemLibraryURL;
+ (void)assertSingleLibraryMode;
+ (BOOL)setSystemLibraryURL:(id)a0 options:(unsigned short)a1 error:(id *)a2;
+ (void)enableMultiLibraryMode;
+ (BOOL)isMultiLibraryModeEnabled;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)a0;
+ (BOOL)isSystemPhotoLibraryURL:(id)a0;
+ (BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)isSystemLibraryURLDefined;
+ (BOOL)bundleScopeShouldBePersistedForRebuild:(unsigned short)a0;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)a0;
+ (id)allPhotosPathsOnThisDevice;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)a0;
+ (void)throwMultiLibraryAPIMisuse;
+ (id)managedPathWithUuid:(const char *)a0 base:(const char *)a1 fileMarker:(const char *)a2 extension:(const char *)a3;
+ (id)systemLibraryBaseDirectory;
+ (BOOL)_isTimeMachineURL:(id)a0;
+ (BOOL)isHFSTimeMachineURL:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithBaseDirectory:(id)a0;
- (id)initWithLibraryURL:(id)a0;
- (BOOL)isLibraryInTimeMachineLocation;
- (id)sqliteErrorIndicatorFilePath;
- (id)rebuildHistoryFilePath;
- (id)relocatedOriginalDirectoriesWithError:(id *)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1 libraryFormat:(unsigned char)a2;
- (unsigned char)_bundleFormatFromLibraryURL:(id)a0 libraryFormat:(unsigned char)a1;
- (void)setOrCompareLibraryURL:(id)a0;
- (id)timeMachineExclusionPathForPathType:(unsigned char)a0;
- (BOOL)createTimeMachineExclusionPathsWithError:(id *)a0;
- (void)setBackupExclusionAttributesForWellKnownLibrariesOrWithCreateOptions:(unsigned long long)a0;
- (BOOL)isValidRelocatedOriginalsDirName:(id)a0;

@end
