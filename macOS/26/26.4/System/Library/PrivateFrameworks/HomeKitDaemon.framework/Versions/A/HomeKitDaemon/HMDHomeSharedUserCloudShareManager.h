@class NSString, HMDCoreDataCloudShareService;

@interface HMDHomeSharedUserCloudShareManager : NSObject <HMFLogging> {
    HMDCoreDataCloudShareService *_shareService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)fetchUserRecordIDForOwner:(id)a0 home:(id)a1;
- (id)_createShareForSharedUserDataWithHomeModelID:(id)a0 logEventBuilder:(id)a1;
- (void)_deleteDanglingShare:(id)a0 homeModelID:(id)a1;
- (id)_existingShareForSharedUserDataWithHomeModelID:(id)a0 error:(id *)a1;
- (id)_existingSharedUserDataRootWithHomeModelID:(id)a0 error:(id *)a1;
- (id)_existingSharedUserDataRootWithoutShareWithHomeModelID:(id)a0 error:(id *)a1;
- (id)_existingSharedUserPrivateRootWithHomeModelID:(id)a0 error:(id *)a1;
- (id)_existingSharesForSharedUserDataWithHomeModelID:(id)a0 error:(id *)a1;
- (BOOL)_onlyShareOwnerInShare:(id)a0;
- (id)_removeShare:(id)a0 usingShareService:(id)a1 forHomeWithUUID:(id)a2;
- (void)_removeSharedUserDataRootsForHomeWithModelID:(id)a0;
- (id)_shareForSharedUserDataWithHomeModelID:(id)a0 logEventBuilder:(id)a1;
- (void)_verifyMKFCKSharedUserDataRootExistsForHomeModelID:(id)a0;
- (id)acceptShareInvitation:(id)a0 homeWithHomeModelID:(id)a1;
- (id)grantAccessForOwner:(id)a0 sharedUserDataWithHomeModelID:(id)a1 logEventBuilder:(id)a2;
- (id)initWithCloudShareService:(id)a0;
- (id)initWithContainer:(id)a0 sharedStore:(id)a1 privateStore:(id)a2 moc:(id)a3;
- (id)leaveShareWithSharedHomeModelID:(id)a0;
- (void)removeShareForSharedUserDataWithHomeModelID:(id)a0;
- (void)removeSharesWithNoParticipantForHomeWithModelID:(id)a0;
- (void)revokeAccessForOwner:(id)a0 sharedUserDataWithHomeModelID:(id)a1;

@end
