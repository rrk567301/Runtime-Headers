@class NSImageView, NSTextField, NSArray, NSPopUpButton, NSButton;
@protocol ACM2SVTrustedDevicesViewControllerDelegate;

@interface ACDDeviceListViewController : ACDBaseViewController

@property (retain, nonatomic) NSPopUpButton *deviceList;
@property (retain, nonatomic) NSButton *sendCodeButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (nonatomic) NSButton *unableToSendCodeButton;
@property (nonatomic) NSImageView *logoImageView;
@property (nonatomic) NSTextField *sendCodeLabel;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *descriptionLabel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long selectedDeviceIndex;
@property (nonatomic) id<ACM2SVTrustedDevicesViewControllerDelegate> delegate;
@property (retain) NSArray *trustedDevicesArray;
@property (retain) NSArray *trustedDevicesArrayToDisplay;

- (void)dealloc;
- (void)reset;
- (void)awakeFromNib;
- (void)cancel:(id)a0;
- (void)deviceChanged:(id)a0;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didResignActive;
- (void)resetWithDeviceList:(id)a0;
- (void)presentWithParentWindow:(id)a0 deviceList:(id)a1 completion:(id /* block */)a2;
- (void)setMessage:(id)a0 type:(unsigned long long)a1;
- (void)disableControls:(BOOL)a0;
- (void)hideAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)refreshDeviceListPopup;
- (id)createTrustedDevicesToDisplay:(id)a0;
- (void)sendCode:(id)a0;
- (void)unableReceiveMessages:(id)a0;

@end
