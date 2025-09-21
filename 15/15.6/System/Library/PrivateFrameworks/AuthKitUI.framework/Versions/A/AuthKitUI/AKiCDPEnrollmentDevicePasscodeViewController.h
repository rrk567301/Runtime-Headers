@class AKiCDPValidationDevice, AKiCDPDeviceValidationFlowViewController, NSString, AKiCSCEntryView, OBTemplateView, NSView;

@interface AKiCDPEnrollmentDevicePasscodeViewController : NSViewController <AKiCSCEntryViewDelegate, NSTableViewDelegate>

@property (nonatomic) AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain, nonatomic) AKiCSCEntryView *icscEntryView;
@property (nonatomic) char showSpinner;
@property (nonatomic) char usesClientSpecifiedDevice;
@property (retain, nonatomic) NSString *errorString;
@property (nonatomic) char forgotAllPasswordsEnabled;
@property (retain, nonatomic) AKiCDPValidationDevice *selectedDevice;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (nonatomic) NSView *passcodePlaceholderView;
@property (readonly, nonatomic) NSString *forgotPasscodeTitle;
@property (readonly, nonatomic) NSString *enterSecretString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (char)allowBackwardsNavigation;
- (id)alternateViewIdentifier;
- (void)codeDidChange;
- (void)didEnterCode:(id)a0;
- (id)initWithFlowController:(id)a0;
- (id)secondAlternateViewIdentifier;
- (void)useAnotherDevicePressed:(id)a0;
- (void)validateDevice;

@end
