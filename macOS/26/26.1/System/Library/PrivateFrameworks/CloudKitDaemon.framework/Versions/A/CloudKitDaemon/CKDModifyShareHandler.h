@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler {
    struct _OpaquePCSShareProtection { } *_selfParticipantPCS;
    struct _PCSPublicIdentityData { } *_selfPPPCSOwnerIdentity;
}

@property (nonatomic) BOOL haveAddedOwnerToShare;
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)a0 operation:(id)a1;
+ (id)modifyHandlerWithShare:(id)a0 operation:(id)a1;

- (void)setServerRecord:(id)a0;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)_fetchSharePCSData;
- (BOOL)isShare;
- (unsigned long long)invitedPCSPermissionForParticipant:(id)a0;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)a0;
- (void)fetchSharePCSData;
- (id)sideEffectRecordIDs;
- (void)clearProtectionDataForRecord;
- (void)updateParticipantsForFetchedShare:(id)a0 error:(id)a1;
- (id)_removePublicKey:(id)a0 fromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_createNewSharePCSDataWithError:(id *)a0;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)a0 zonePCSData:(id)a1;
- (BOOL)_modifyRoleForParticipant:(id)a0 invitedPCS:(struct _OpaquePCSShareProtection { } *)a1 shareeIdentities:(id)a2 error:(id *)a3;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)a0;
- (BOOL)_serializePCSDataForShareWithError:(id *)a0;
- (void)_addPublicKeyToSelfParticipantWithCompletionHandler:(id /* block */)a0;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (void)prepareForSaveWithCompletionHandler:(id /* block */)a0;
- (id)_ensurePrivateParticipant:(id)a0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (struct _PCSPublicIdentityData { } *)createPublicIdentityFromPublicKeyForParticipant:(id)a0 error:(id *)a1;
- (void)savePCSDataToCache;
- (id)_publicKeyForParticipant:(id)a0 error:(id *)a1;
- (void)decryptSelfParticipantPCSWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_setupParticipantsProtectionInfos:(id *)a0;
- (id)_removePrivateParticipant:(id)a0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_handleSharePCSData:(id)a0 zonePCSData:(id)a1;
- (void)_alignParticipantPermissions;
- (unsigned long long)serviceType;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (BOOL)_updateSharePublicPCSWithError:(id *)a0;
- (BOOL)isCloudDocsContainer;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (void)createSharePCSDataWithKRS:(id /* block */)a0;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)a0 error:(id)a1;

@end
