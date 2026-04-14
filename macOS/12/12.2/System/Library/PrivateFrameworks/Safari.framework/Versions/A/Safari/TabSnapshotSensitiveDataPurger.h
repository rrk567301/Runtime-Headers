@class NSObject;
@protocol OS_dispatch_queue, TabSnapshotImageStorage;

@interface TabSnapshotSensitiveDataPurger : NSObject <TabSnapshotSensitiveDataPurging> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_APIQueue;
    id<TabSnapshotImageStorage> _storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)purgeSnapshotsForURLs:(id)a0;
- (void)purgeAllSnapshots;
- (void)finalizePendingOperationsBeforeTermination;
- (void)setImageStorage:(id)a0;
- (void)purgeSnapshotsCreatedOnOrAfterDate:(id)a0;
- (void)purgeSnapshotsForUUIDs:(id)a0;

@end
