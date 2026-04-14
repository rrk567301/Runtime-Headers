@class NSImageView, NSTextField, NSString, NSButton;
@protocol PKPaymentAuthorizationErrorViewControllerDelegate;

@interface PKPaymentAuthorizationErrorViewController : PKPaymentAuthorizationChildViewController

@property (retain, nonatomic) NSImageView *paymentLogoImageView;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSTextField *messageTextField;
@property (retain, nonatomic) NSButton *okButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSString *deviceName;
@property (weak, nonatomic) id<PKPaymentAuthorizationErrorViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelButtonClicked:(id)a0;
- (void)okButtonClicked:(id)a0;
- (void)_applyProperties;

@end
