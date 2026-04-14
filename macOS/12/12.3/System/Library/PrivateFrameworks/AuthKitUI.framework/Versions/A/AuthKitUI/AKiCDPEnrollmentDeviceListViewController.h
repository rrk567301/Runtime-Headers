@class AKiCDPDeviceValidationFlowViewController, NSArray, IASPickerViewController, NSString, OBTemplateView, NSView;

@interface AKiCDPEnrollmentDeviceListViewController : NSViewController <NSTableViewDelegate>

@property AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain) IASPickerViewController *devicePickerController;
@property (retain) NSArray *devices;
@property (retain) NSString *chooseDeviceString;
@property (retain) NSString *forgotDevicesString;
@property BOOL forgotAllPasswordsAndPasscodesButtonEnabled;
@property (retain, nonatomic) OBTemplateView *templateView;
@property unsigned long long deviceSelection;
@property NSView *devicePickerPlaceholderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (id)initWithFlowController:(id)a0;
- (void)forgotAllPasswordsAndPasscodesPressed:(id)a0;
- (void)setUpDevicesSpecificStrings;

@end
