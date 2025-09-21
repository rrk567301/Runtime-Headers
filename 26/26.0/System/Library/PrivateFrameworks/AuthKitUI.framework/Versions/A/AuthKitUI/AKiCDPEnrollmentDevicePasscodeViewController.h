@class NSTextField, NSString, NSView, AKiCSCEntryView, AKiCDPDeviceValidationFlowViewController, OBTemplateView, NSLayoutConstraint, AKiCDPValidationDevice, NSImageView;

@interface AKiCDPEnrollmentDevicePasscodeViewController : NSViewController <AKiCSCEntryViewDelegate, NSTableViewDelegate>

@property (nonatomic) AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain, nonatomic) AKiCSCEntryView *icscEntryView;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) BOOL usesClientSpecifiedDevice;
@property (retain, nonatomic) NSString *errorString;
@property (nonatomic) BOOL forgotAllPasswordsEnabled;
@property (retain, nonatomic) AKiCDPValidationDevice *selectedDevice;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (weak, nonatomic) NSLayoutConstraint *viewWidthConstraint;
@property (weak, nonatomic) NSLayoutConstraint *viewHeightConstraint;
@property (weak, nonatomic) NSTextField *messageTextField;
@property (weak, nonatomic) NSLayoutConstraint *messageTextFieldCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *messageTextFieldDefaultTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *messageTextFieldDefaultLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *messageTextFieldTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *pinViewDefaultLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *pinViewDefaultTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *pinViewCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *pinViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *errorLabelDefaultLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *errorLabelDefaultTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *errorLabelCenterXConstraint;
@property (weak, nonatomic) NSTextField *errorLabel;
@property (weak, nonatomic) NSLayoutConstraint *errorLabelBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deviceImageViewCenterXConstraint;
@property (weak, nonatomic) NSImageView *deviceImageView;
@property (weak, nonatomic) NSTextField *deviceTypeTextField;
@property (weak, nonatomic) NSLayoutConstraint *deviceTypeTextFieldCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deviceTypeTextFieldTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deviceTypeTextFieldLeadingConstraint;
@property (weak, nonatomic) NSTextField *deviceNameTextField;
@property (weak, nonatomic) NSLayoutConstraint *deviceNameTextFieldCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deviceNameTextFieldTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deviceNameTextFieldLeadingConstraint;
@property (nonatomic) NSView *passcodePlaceholderView;
@property (readonly, nonatomic) NSString *forgotPasscodeTitle;
@property (readonly, nonatomic) NSString *enterSecretString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (BOOL)allowBackwardsNavigation;
- (id)alternateViewIdentifier;
- (void)codeDidChange;
- (void)didEnterCode:(id)a0;
- (id)initWithFlowController:(id)a0;
- (id)secondAlternateViewIdentifier;
- (void)useAnotherDevicePressed:(id)a0;
- (void)validateDevice;

@end
