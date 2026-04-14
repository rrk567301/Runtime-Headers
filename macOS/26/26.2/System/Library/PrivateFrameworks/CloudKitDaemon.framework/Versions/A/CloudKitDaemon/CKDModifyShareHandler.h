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
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (void)savePCSDataToCache;
- (BOOL)isShare;
- (id)sideEffectRecordIDs;
- (void)fetchSharePCSData;
- (void)prepareForSaveWithCompletionHandler:(id /* block */)a0;
- (void)clearProtectionDataForRecord;
- (void)_addPublicKeyToSelfParticipantWithCompletionHandler:(id /* block */)a0;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)a0 error:(id)a1;
- (BOOL)_updateSharePublicPCSWithError:(id *)a0;
- (unsigned long long)serviceType;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)_removePrivateParticipant:(id)a0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (unsigned long long)invitedPCSPermissionForParticipant:(id)a0;
- (BOOL)_setupParticipantsProtectionInfos:(id *)a0;
- (id)_ensurePrivateParticipant:(id)a0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_handleSharePCSData:(id)a0 zonePCSData:(id)a1;
- (void)createSharePCSDataWithKRS:(id /* block */)a0;
- (id)_createNewSharePCSDataWithError:(id *)a0;
- (void)decryptSelfParticipantPCSWithCompletionHandler:(id /* block */)a0;
- (BOOL)_modifyRoleForParticipant:(id)a0 invitedPCS:(struct _OpaquePCSShareProtection { } *)a1 shareeIdentities:(id)a2 error:(id *)a3;
- (void)_alignParticipantPermissions;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)a0 zonePCSData:(id)a1;
- (struct _PCSPublicIdentityData { } *)createPublicIdentityFromPublicKeyForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)a0;
- (id)_publicKeyForParticipant:(id)a0 error:(id *)a1;
- (id)_removePublicKey:(id)a0 fromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (BOOL)_serializePCSDataForShareWithError:(id *)a0;
- (void)_fetchSharePCSData;
- (BOOL)isCloudDocsContainer;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)a0;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)updateParticipantsForFetchedShare:(id)a0 error:(id)a1;

@end
