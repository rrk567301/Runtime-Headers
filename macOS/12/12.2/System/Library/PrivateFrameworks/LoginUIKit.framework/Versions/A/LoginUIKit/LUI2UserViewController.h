@class AVTLockscreenCoordinator, LUIMutableBoolean, NSTimer, AVTAvatar, LUI2UserView;

@interface LUI2UserViewController : LUI2ViewController

@property BOOL usesVisualEffectBackgroundUserViewInternal;
@property (retain) AVTLockscreenCoordinator *lsCoordinator;
@property LUIMutableBoolean *canSetDebugInfo;
@property (retain) NSTimer *avatarIdleTimer;
@property BOOL paused;
@property (retain) AVTAvatar *avatar;
@property (retain) LUI2UserView *userView;
@property BOOL usesVisualEffectBackgroundUserView;
@property (readonly) double defaultInitialPoseDelay;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)mouseEntered:(id)a0;
- (void)viewDidLoad;
- (void)showAvatarIdle;
- (void)showAvatarSelected;
- (void)_handleAvatarWasAddedToViewWithCompletionHandler:(id /* block */)a0;
- (void)_startAvatarIdleTimer;
- (void)_createCoordinatorWithAvatar:(id)a0 stickerConfiguration:(id)a1 initialPose:(id)a2 andCropTransform:(id)a3 completionHandler:(id /* block */)a4;
- (void)_createUserView;
- (void)showAvatarLoginFailure;
- (void)showAvatarLoginSuccess;
- (void)showAvatarPasswordEntry;
- (void)showAvatarSelected:(id)a0 withStickerConfiguration:(id)a1 pose:(id)a2 andTransform:(id)a3 afterDelay:(double)a4;

@end
