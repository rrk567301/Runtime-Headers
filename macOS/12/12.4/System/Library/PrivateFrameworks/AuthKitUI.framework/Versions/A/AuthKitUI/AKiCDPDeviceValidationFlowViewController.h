@class AKiCDPValidationDevice, NSArray, AKiCDPEnrollmentDeviceListViewController, AKiCDPEnrollmentDevicePasscodeViewController, AKiCDPWaitForApprovalViewController, OBTemplateView;
@protocol MBSecondPartyHost, AKiCDPValidationDelegate;

@interface AKiCDPDeviceValidationFlowViewController : NSViewController

@property unsigned long long state;
@property (retain) AKiCDPEnrollmentDeviceListViewController *deviceListVC;
@property (retain) AKiCDPEnrollmentDevicePasscodeViewController *passcodeVC;
@property (retain) AKiCDPWaitForApprovalViewController *approvalVC;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (readonly) NSArray *devices;
@property (retain) AKiCDPValidationDevice *selectedDevice;
@property id<AKiCDPValidationDelegate> delegate;
@property id<MBSecondPartyHost> assistant;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 assistant:(id)a1;
- (void)startiCDPValidationFlow;
- (void)switchToDevicePicker:(unsigned long long)a0;
- (void)switchToDeviceCodeEntry;
- (void)switchToApproveFromAnotherDevice;
- (void)showRunOutOfDevicesOptionsSheetForDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)completelyFillWithView:(id)a0;
- (void)showLoginAlertWithTitle:(id)a0 message:(id)a1 buttleTitle:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)shouldUseJustDeviceNameForDevice:(id)a0;
- (id)localizedStringForKey:(id)a0 deviceClass:(id)a1;
- (void)showLoginAlertWithTitle:(id)a0 message:(id)a1 withCompletion:(id /* block */)a2;

@end
