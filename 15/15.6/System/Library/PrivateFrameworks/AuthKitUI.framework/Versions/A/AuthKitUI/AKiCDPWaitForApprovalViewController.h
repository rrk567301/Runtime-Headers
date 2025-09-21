@class AKiCDPDeviceValidationFlowViewController, OBTemplateView;

@interface AKiCDPWaitForApprovalViewController : AKiCDPDeviceValidationFlowViewController

@property (nonatomic) AKiCDPDeviceValidationFlowViewController *flowController;
@property (nonatomic) char resetButtonEnabled;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (readonly, nonatomic) char shouldAllowReset;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)initWithFlowController:(id)a0;
- (void)resetPressed:(id)a0;
- (void)showResetInfoSheet;

@end
