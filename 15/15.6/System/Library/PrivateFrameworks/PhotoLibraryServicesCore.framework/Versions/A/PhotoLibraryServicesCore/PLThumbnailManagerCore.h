@class NSMutableDictionary, NSArray, PLPhotoLibraryPathManager, NSLock;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManagerCore : NSObject {
    NSMutableDictionary *_thumbnailConfigurationDict;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    NSLock *_thumbManagersLock;
    id<PLThumbPersistenceManager> _lastUsedThumbManager;
    unsigned short _lastUsedThumbManagerFormatID;
    NSArray *_fastImageTables;
}

@property (readonly) NSMutableDictionary *thumbManagersByFormat;
@property (readonly) PLPhotoLibraryPathManager *pathManager;

+ (id)tableThumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)thumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (long long)allocatedFileSizeOfThumbnailTablesWithPathManager:(id)a0;
+ (char)hasThumbnailConfigMismatchWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (char)isMissingThumbnailTablesWithPathManager:(id)a0;
+ (char)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)a0;
+ (void)removeThumbnailTablesUnsupportedOnly:(char)a0 withPathManager:(id)a1;
+ (void)removeThumbnailTablesUnsupportedOnly:(char)a0 withPathManager:(id)a1 fileManagerDelegate:(id)a2;
+ (long long)requiredThumbnailResetTypeWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (void)stampThumbnailConfiguration:(id)a0 toFile:(char)a1 withPathManager:(id)a2;
+ (id)thumbnailConfigurationDictWithPathManager:(id)a0;
+ (id)thumbnailConfigurationPathWithPathManager:(id)a0;
+ (id)thumbnailFormatIDsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)uncompressedImageTableSpecificationsWithPathManager:(id)a0;
+ (char)wantsTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (id)_configurationThumbnailFormatIDsWithPathManager:(id)a0;
+ (id)_formatIDsForIthmbFilesWithPathManager:(id)a0;
+ (id)_generateTableFormatsFromFormatIDs:(id)a0;
+ (id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)a0;
+ (char)_hasTableChangesOnlyFromFormatIDs:(id)a0 toFormatIDs:(id)a1;
+ (char)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)a0;
+ (char)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)a0;
+ (id)_thumbnailFormatsFromIDs:(id)a0;
+ (int)configurationThumbnailVersionWithPathManager:(id)a0;
+ (void)enumerateThumbnailTablesWithPathManager:(id)a0 fileManager:(id)a1 handler:(id /* block */)a2;
+ (void)invalidateCachedConfig;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)a0;
+ (int)thumbnailVersionForConfigPhase:(long long)a0 withPathManager:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)fastThumbPersistenceManagers;
- (id)initWithPhotoLibraryPathManager:(id)a0;
- (id)thumbManagerForFormatID:(unsigned short)a0 thumbFileManagerClass:(Class)a1 readOnly:(char)a2;
- (id)_thumbManagerForFormatID:(unsigned short)a0;

@end
