@class PLCloudBatchUploader, PLManagedObjectContext, PLCloudPhotoLibraryUploadTracker;
@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    PLManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

- (void).cxx_destruct;
- (long long)migrate;
- (BOOL)checkForExistingMigrationMarker;
- (id)fetchAllPersistentHistoryTransactions;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)a0;
- (id)initWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;
- (void)migrateToPersistentHistoryIfNecessary;
- (BOOL)readLastKnownChangeHubIndex:(unsigned long long *)a0;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)a0;
- (void)uploadEventResults:(id)a0;

@end
