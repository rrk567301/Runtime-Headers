@class AKiCDPDeviceValidationFlowViewController, OBTemplateView;

@interface AKiCDPWaitForApprovalViewController : AKiCDPDeviceValidationFlowViewController

@property AKiCDPDeviceValidationFlowViewController *flowController;
@property BOOL resetButtonEnabled;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (readonly) BOOL shouldAllowReset;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)resetPressed:(id)a0;
- (void)showResetInfoSheet;
- (id)initWithFlowController:(id)a0;

@end
