@class NSString;

@interface PLCollectionShareSharedStreamBackend : NSObject <PLCollectionShareSyncBackend>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteCommentWithGUIDFromServer:(id)a0;
- (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
- (void)publishCloudSharedCommentToServer:(id)a0;
- (void)deleteCollectionShareDirectory:(id)a0;
- (void)markAsViewedForCollectionShare:(id)a0;
- (void)_enqueueCloudSharedAssetsForPublishToServer:(id)a0 inCollectionShare:(id)a1;
- (BOOL)_hasReachedLimitOfSubscribedStreamsInLibrary:(id)a0;
- (double)_intervalBetweenAlbumPolls;
- (void)_reconcileNextRelationship:(id)a0 connection:(id)a1 personID:(id)a2 collectionShare:(id)a3 photoLibrary:(id)a4 completionHandler:(id /* block */)a5;
- (void)_setCloudPersonIDForCollectionShare:(id)a0;
- (id)_sharedStreamCollectionShareDirectoryPathForCollectionShare:(id)a0;
- (void)_stripScopeIdentifierPrefixForCollectionShare:(id)a0;
- (void)acceptCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canAcceptPendingInvitationForCollectionShare:(id)a0 error:(id *)a1;
- (void)checkServerForChangesForCollectionShare:(id)a0;
- (id)cplFullRecordForCollectionShare:(id)a0;
- (id)cplScopeChangeForCollectionShare:(id)a0;
- (void)declineCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCollectionShareFromServer:(id)a0;
- (void)deleteSharedStreamAssetsFromServer:(id)a0;
- (void)insertOwnedParticipantInLibrary:(id)a0 collectionShare:(id)a1 unitTestMode:(BOOL)a2;
- (BOOL)isSyncableChangeForCollectionShare:(id)a0;
- (void)markPendingInvitationAsSpamForCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)prioritizeDownloadsForCollectionShare:(id)a0 shouldPrioritize:(BOOL)a1;
- (void)publishAssets:(id)a0 withComment:(id)a1 collectionShare:(id)a2;
- (void)publishCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)reconcileModelRelationshipsForCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)recordCloudDeletionIfNeededForCollectionShare:(id)a0;
- (void)removeParticipants:(id)a0 collectionShare:(id)a1;
- (void)sendInvitationsForParticipants:(id)a0 collectionShare:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsCloudUploadForCollectionShare:(id)a0;
- (void)trashCollectionShare:(id)a0;
- (void)unsubscribeFromCollectionShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePublicPermission:(long long)a0 collectionShare:(id)a1;
- (void)updatePublicURLState:(short)a0 collectionShare:(id)a1;
- (void)updateTitle:(id)a0 collectionShare:(id)a1;

@end
