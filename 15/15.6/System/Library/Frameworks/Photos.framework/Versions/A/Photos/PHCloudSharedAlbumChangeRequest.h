@class NSArray, NSDictionary, NSString, NSMutableArray, PHCloudSharedAlbum;

@interface PHCloudSharedAlbumChangeRequest : PHChangeRequest {
    char _isPublic;
    char _didSetIsPublic;
    char _cloudMultipleContributorsEnabled;
    char _didSetCloudMultipleContributorsEnabled;
    NSString *_cloudOwnerEmail;
    char _didSetCloudOwnerEmail;
    char _didSetInvitationState;
    long long _invitationStateToUpdate;
    char _didSendPendingInvitations;
    char _didReportInvitationAsSpam;
    char _didPublish;
}

@property (retain, nonatomic) PHCloudSharedAlbum *cloudSharedAlbum;
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToRemove;
@property (retain, nonatomic) NSMutableArray *pendingInvitationRecordGUIDs;
@property (retain, nonatomic) NSMutableArray *invitationsToAdd;
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToUpdate;
@property (retain, nonatomic) NSArray *assetsToPublish;
@property (retain, nonatomic) NSDictionary *assetsSharingInfos;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isOwned;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (nonatomic) char isPublic;
@property (nonatomic) char cloudPublicURLEnabled;
@property (nonatomic) char cloudPublicURLEnabledLocal;
@property (nonatomic) char cloudMultipleContributorsEnabled;
@property (nonatomic) char cloudMultipleContributorsEnabledLocal;
@property (nonatomic) char cloudNotificationsEnabled;
@property (nonatomic) long long invitationState;

+ (id)changeRequestForCloudSharedAlbum:(id)a0;
+ (id)creationRequestForCloudSharedAlbumWithTitle:(id)a0;

- (void).cxx_destruct;
- (void)publish;
- (void)acceptInvitation;
- (void)declineInvitation;
- (void)resendPendingInvitationRecords:(id)a0;
- (void)addInvitationRecordWithFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 emails:(id)a3 phones:(id)a4;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)managedEntityName;
- (id)placeholderForCreatedCloudSharedAlbum;
- (void)publishBatchOfOriginalAssets:(id)a0 withBatchCommentText:(id)a1 creationOptionsPerAsset:(id)a2;
- (void)removeCloudSharedAlbumInvitationRecords:(id)a0;
- (void)reportInvitationAsSpam;
- (void)sendPendingInvitations;
- (void)setDidPublish:(char)a0;
- (void)setDidReportInvitationAsSpam:(char)a0;
- (void)setDidSendPendingInvitations:(char)a0;
- (void)setInvitationStateLocalForInvitationRecords:(id)a0 invitationStateLocal:(id)a1;
- (void)stopSharing;

@end
