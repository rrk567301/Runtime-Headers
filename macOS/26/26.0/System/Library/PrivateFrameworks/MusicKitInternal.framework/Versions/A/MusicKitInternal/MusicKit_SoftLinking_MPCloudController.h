@class NSString, MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudController *sharedCloudController;
@property (class, readonly, nonatomic) NSString *canShowCloudDownloadButtonsDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *isUpdateInProgressDidChangeNotificationName;

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic, getter=isUpdateInProgress) BOOL updateInProgress;
@property (readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
@property (readonly, nonatomic, getter=isInitialImport) BOOL initialImport;
@property (readonly, nonatomic, getter=maximumAllowedPins) long long maximumAllowedPins;

+ (id)controllerWithUserIdentity:(id)a0;
+ (id)instanceManager;

- (void)resetInvitationURLForCollaborationWithPersistentID:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)a0;
- (void)respondToPendingCollaborator:(id)a0 onCollaborationWithPersistentID:(id)a1 withApproval:(BOOL)a2 completion:(id /* block */)a3;
- (void)becomeActive;
- (void)resignActive;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)cloudAddToPlaylistBehavior;
- (void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)a0 ignoreMinRefreshInterval:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)a0;
- (void)_handleIsUpdateInProgressDidChangeNotificationName:(id)a0;
- (id)_initWithUnderlyingCloudController:(id)a0;
- (void)enableCloudLibraryWithCompletionHandler:(id /* block */)a0;
- (void)updateSharingMode:(long long)a0 onCollaborationWithPersistentID:(id)a1 completion:(id /* block */)a2;

@end
