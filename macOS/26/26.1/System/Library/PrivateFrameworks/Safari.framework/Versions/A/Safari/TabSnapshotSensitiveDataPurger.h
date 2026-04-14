@class NSObject;
@protocol OS_dispatch_queue, TabSnapshotImageStorage;

@interface TabSnapshotSensitiveDataPurger : NSObject <TabSnapshotSensitiveDataPurging> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_APIQueue;
    id<TabSnapshotImageStorage> _storage;
}

- (void).cxx_destruct;
- (id)init;
- (void)finalizePendingOperationsBeforeTermination;
- (void)purgeAllSnapshots;
- (void)purgeSnapshotsCreatedOnOrAfterDate:(id)a0;
- (void)purgeSnapshotsForURLs:(id)a0;
- (void)purgeSnapshotsForUUIDs:(id)a0;
- (void)setImageStorage:(id)a0;

@end
