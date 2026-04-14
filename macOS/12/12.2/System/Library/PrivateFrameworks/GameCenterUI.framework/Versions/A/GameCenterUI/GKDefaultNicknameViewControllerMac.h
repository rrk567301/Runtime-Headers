@class NSTextField, NSView, GKAvatarContainer, NSString, GKDashboardPlayerPhotoView, GKGradientView, NSButton, GKNicknameControllerMac, NSBox;

@interface GKDefaultNicknameViewControllerMac : NSViewController <GKNicknameControllerMacDelegate, GKAvatarContainerDelegate>

@property (retain, nonatomic) GKNicknameControllerMac *nicknameController;
@property (weak) NSView *nicknameSuggestionContainer;
@property NSButton *notNowButton;
@property NSButton *cancelButton;
@property NSButton *continueButton;
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
- (void)viewDidLoad;
- (void)saveButtonPressed:(id)a0;
- (void)nicknameTextDidChange;
- (void)defaultOnboardingFlowFinished;
- (void)nicknameUpdateRequestCompleted:(BOOL)a0;
- (void)updateSaveButtonWithTitle:(id)a0 andState:(BOOL)a1;
- (void)didSelectToDeleteAvatar;
- (void)mouseDidEnterAvatarContainer;
- (void)mouseDidLeaveAvatarContainer;
- (void)hideCancelButton:(BOOL)a0;
- (void)settingsPressed:(id)a0;
- (void)notNowPressed:(id)a0;
- (void)useSuggestedNickname:(id)a0;

@end
