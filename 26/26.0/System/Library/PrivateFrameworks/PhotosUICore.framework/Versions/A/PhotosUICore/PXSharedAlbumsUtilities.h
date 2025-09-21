@interface PXSharedAlbumsUtilities : NSObject

+ (BOOL)publicURLEnabledForSharedAlbum:(id)a0;
+ (void)acceptInvitationToSharedAlbum:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addComment:(id)a0 toAsset:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)canContributeAssetsToSharedAlbum:(id)a0;
+ (BOOL)canSetMultipleContributorsEnabledForSharedAlbum:(id)a0;
+ (BOOL)canSetNotificationsEnabledForSharedAlbum:(id)a0;
+ (BOOL)canSetPublicURLEnabledForSharedAlbum:(id)a0;
+ (void)declineInvitationToSharedAlbum:(id)a0 completionHandler:(id /* block */)a1;
+ (id)fetchSharedAlbumWithScopeIdentifier:(id)a0 inPhotoLibrary:(id)a1 allowPending:(BOOL)a2;
+ (id)fetchSharedAlbumWithTitle:(id)a0 inPhotoLibrary:(id)a1 allowPending:(BOOL)a2;
+ (id)fetchSharedAlbumsInPhotoLibrary:(id)a0 allowPending:(BOOL)a1;
+ (BOOL)hasReachedLimitOfAcceptedSharedAlbumsInPhotoLibrary:(id)a0;
+ (void)inviteParticipants:(id)a0 toSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (id)localizedSharedByDescriptionForSharedAlbum:(id)a0;
+ (void)markInvitationToSharedAlbumAsSpam:(id)a0 completionHandler:(id /* block */)a1;
+ (void)markSharedAlbumAsViewed:(id)a0;
+ (BOOL)multipleContributorsEnabledForSharedAlbum:(id)a0;
+ (BOOL)notificationsEnabledForSharedAlbum:(id)a0;
+ (id)ownerForSharedAlbum:(id)a0;
+ (BOOL)ownerIsVettedForSharedAlbum:(id)a0;
+ (id)publicURLForSharedAlbum:(id)a0;
+ (void)removeComments:(id)a0 fromAsset:(id)a1 completionHandler:(id /* block */)a2;
+ (void)removeParticipants:(id)a0 fromSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resendInvitationToParticipant:(id)a0 inSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (id)scopeIdentifierForSharedAlbum:(id)a0;
+ (void)setLikedTo:(BOOL)a0 forAssets:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setMultipleContributorsEnabled:(BOOL)a0 forSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setNotificationsEnabled:(BOOL)a0 forSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setPublicURLEnabled:(BOOL)a0 forSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setTitle:(id)a0 forSharedAlbum:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)sharedAlbumHasUnseenContent:(id)a0;
+ (BOOL)sharedAlbumIsAppleFamily:(id)a0;
+ (BOOL)sharedAlbumIsOwned:(id)a0;
+ (BOOL)sharedAlbumIsPending:(id)a0;
+ (BOOL)sharedAlbumsEnabledForPhotoLibrary:(id)a0;

- (id)init;

@end
