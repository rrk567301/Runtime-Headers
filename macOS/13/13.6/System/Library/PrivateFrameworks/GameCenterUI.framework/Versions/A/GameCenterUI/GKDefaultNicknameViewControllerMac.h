@class NSTextField, NSView, GKAvatarContainer, NSString, GKDashboardPlayerPhotoView, GKGradientView, NSButton, GKNicknameControllerMac, NSBox;

@interface GKDefaultNicknameViewControllerMac : NSViewController <GKNicknameControllerMacDelegate, GKAvatarContainerDelegate>

@property (retain, nonatomic) GKNicknameControllerMac *nicknameController;
@property (weak) NSView *nicknameSuggestionContainer;
@property (weak) NSView *divider;
@property (weak) NSBox *container;
@property NSButton *notNowButton;
@property NSButton *cancelButton;
@property NSButton *continueButton;
@property NSButton *backButton;
@property (retain) NSBox *cancelButtonBackground;
@property NSView *contentContainer;
@property GKDashboardPlayerPhotoView *avatarView;
@property GKAvatarContainer *avatarContainer;
@property NSTextField *deleteLabel;
@property GKGradientView *deleteLabelContainer;
@property NSTextField *mainTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)saveButtonPressed:(id)a0;
- (void)backButtonPressed:(id)a0;
- (void)nicknameUpdateRequestCompleted:(BOOL)a0;
- (void)defaultOnboardingFlowFinished;
- (void)didSelectToDeleteAvatar;
- (void)hideCancelButton:(BOOL)a0;
- (void)mouseDidEnterAvatarContainer;
- (void)mouseDidLeaveAvatarContainer;
- (void)nicknameTextDidChange;
- (void)notNowPressed:(id)a0;
- (void)settingsPressed:(id)a0;
- (void)updateSaveButtonWithTitle:(id)a0 andState:(BOOL)a1;
- (void)useSuggestedNickname:(id)a0;

@end
