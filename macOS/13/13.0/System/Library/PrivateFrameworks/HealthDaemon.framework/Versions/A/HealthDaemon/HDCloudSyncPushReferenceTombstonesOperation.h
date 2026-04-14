@class NSMutableArray, HDCloudSyncCachedZone;

@interface HDCloudSyncPushReferenceTombstonesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedTombstones;
    NSMutableArray *_referenceRecordsToDelete;
    NSMutableArray *_attachmentsRecordsToDelete;
    NSMutableArray *_tombstoneRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
