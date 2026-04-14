@class NSPersistentStore, HMDManagedObjectContext, NSPersistentCloudKitContainer, CKContainer;

@interface HMDHomeCloudShareManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKContainer *_ckContainer;
    HMDManagedObjectContext *_moc;
    NSPersistentCloudKitContainer *_container;
    NSPersistentStore *_sharedStore;
    NSPersistentStore *_privateStore;
}

- (void).cxx_destruct;
- (id)_pushUpdatedShare:(id)a0;
- (void)removeAccessForUser:(id)a0 home:(id)a1;
- (id)addAccessForUser:(id)a0 home:(id)a1;
- (void)removeShareForHome:(id)a0;
- (id)initWithContainer:(id)a0 sharedStore:(id)a1 privateStore:(id)a2 moc:(id)a3;
- (id)acceptShareInvitation:(id)a0;
- (id)_addAccessForUser:(id)a0 home:(id)a1;
- (id)_shareForHome:(id)a0;
- (id)_fetchParticipantForUser:(id)a0;
- (id)_removeParticipant:(id)a0 share:(id)a1;
- (id)_addParticipant:(id)a0 share:(id)a1 homeModelID:(id)a2;
- (void)_removeAccessForUser:(id)a0 home:(id)a1;
- (id)_existingShareForHomeWithModelID:(id)a0;
- (id)_fetchShareMetadataForInvitation:(id)a0;
- (id)_createShareForHome:(id)a0;
- (id)_fetchShareWithRecordID:(id)a0;

@end
