@class NSTextField, NSString, NSArray, NSView, AKiCDPDeviceValidationFlowViewController, OBTemplateView, NSLayoutConstraint, IASPickerViewController;

@interface AKiCDPEnrollmentDeviceListViewController : NSViewController <NSTableViewDelegate>

@property (nonatomic) AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain, nonatomic) IASPickerViewController *devicePickerController;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *chooseDeviceString;
@property (retain, nonatomic) NSString *forgotDevicesString;
@property (nonatomic) BOOL forgotAllPasswordsAndPasscodesButtonEnabled;
@property (retain, nonatomic) OBTemplateView *templateView;
@property unsigned long long deviceSelection;
@property (nonatomic) NSView *devicePickerPlaceholderView;
@property NSTextField *headerTextField;
@property (weak, nonatomic) NSLayoutConstraint *headerDefaultTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *headerDefaultLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *headerDefaultCenterXConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)forgotAllPasswordsAndPasscodesPressed:(id)a0;
- (id)initWithFlowController:(id)a0;
- (void)setUpDevicesSpecificStrings;

@end
