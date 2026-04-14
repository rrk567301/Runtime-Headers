@class NSTextField, NSString, NSMatrix, NSProgressIndicator, NSButton, NSWindow;
@protocol SSConnectionPromptObserver, SSSessionSelectViewControllerDelegate;

@interface SSSessionSelectViewController : NSViewController

@property (copy) NSString *shareDisplayInformativeText;
@property NSWindow *waitingForAnswerSheet;
@property NSProgressIndicator *waitingForAnswerProgress;
@property NSButton *waitingButton;
@property NSTextField *waitingMessageTextField;
@property NSMatrix *askOrLoginRadioButtons;
@property id<SSSessionSelectViewControllerDelegate, SSConnectionPromptObserver> delegate;
@property (readonly) NSString *displayIsBusyDescriptiveText;
@property (readonly) NSString *logIntoYourAccountRadioTitle;
@property (copy) NSString *authenticatingUser;
@property (copy) NSString *machineName;
@property (copy) NSString *userOnMainDisplay;
@property (copy) NSString *mainDisplayButtonText;

+ (id)keyPathsForValuesAffectingShareDisplayInformativeText;
+ (id)keyPathsForValuesAffectingVirtualSessionInformativeText;
+ (id)keyPathsForValuesAffectingMainText;
+ (id)keyPathsForValuesAffectingLoginUserNameText;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didEndSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)stopWaitingButtonPressed:(id)a0;
- (void)acknowledgeUserDeclinedPressed:(id)a0;
- (void)shareScreenButtonClicked:(id)a0;
- (void)backButtonClicked:(id)a0;
- (void)showWaitingForAnswerSheet;
- (void)showUserDeclined;
- (id)loginUserNameText;
- (void)setAskOrShareText:(BOOL)a0 allowsVirtualDisplay:(BOOL)a1;

@end
