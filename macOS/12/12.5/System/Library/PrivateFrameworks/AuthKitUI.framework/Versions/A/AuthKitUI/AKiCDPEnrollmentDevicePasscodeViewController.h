@class AKiCDPValidationDevice, AKiCDPDeviceValidationFlowViewController, NSString, AKiCSCEntryView, OBTemplateView, NSView;

@interface AKiCDPEnrollmentDevicePasscodeViewController : NSViewController <AKiCSCEntryViewDelegate, NSTableViewDelegate>

@property AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain) AKiCSCEntryView *icscEntryView;
@property BOOL showSpinner;
@property BOOL usesClientSpecifiedDevice;
@property (retain) NSString *errorString;
@property BOOL forgotAllPasswordsEnabled;
@property (retain) AKiCDPValidationDevice *selectedDevice;
@property (retain, nonatomic) OBTemplateView *templateView;
@property NSView *passcodePlaceholderView;
@property (readonly) NSString *forgotPasscodeTitle;
@property (readonly) NSString *enterSecretString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)didEnterCode:(id)a0;
- (void)codeDidChange;
- (id)initWithFlowController:(id)a0;
- (void)useAnotherDevicePressed:(id)a0;
- (BOOL)allowBackwardsNavigation;
- (void)validateDevice;
- (id)alternateViewIdentifier;
- (id)secondAlternateViewIdentifier;

@end
