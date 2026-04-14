@class NSTextField, NSString, NSArray, PKGlyphView, PKPaymentAuthorizationLayout, NSImage, NSLayoutConstraint, NSImageView, PKPaymentAuthorizationPasswordEntryViewController;
@protocol PKPaymentAuthorizationFooterViewControllerDelegate;

@interface PKPaymentAuthorizationFooterViewController : NSViewController

@property (retain, nonatomic) PKPaymentAuthorizationPasswordEntryViewController *passwordEntryViewController;
@property (retain, nonatomic) NSImageView *keyboardView;
@property (retain, nonatomic) PKGlyphView *glyphView;
@property (retain, nonatomic) NSImageView *deviceView;
@property (retain, nonatomic) NSTextField *statusTextField;
@property (retain, nonatomic) NSLayoutConstraint *deviceViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *deviceToStatusTextFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *glyphToStatusTextFirstBaselineConstraint;
@property (retain, nonatomic) NSArray *deviceViewConstraints;
@property (retain, nonatomic) NSArray *glyphViewConstraints;
@property (retain, nonatomic) NSArray *keyboardViewConstraints;
@property (retain, nonatomic) NSLayoutConstraint *keyboardToStatusTextFirstBaselineConstraint;
@property (retain, nonatomic) NSArray *passwordViewConstraints;
@property (retain, nonatomic) NSImage *phoneImage;
@property (retain, nonatomic) NSImage *watchImage;
@property (retain, nonatomic) NSImage *failureImage;
@property (nonatomic) BOOL useAlternatePhoneImage;
@property (retain, nonatomic) NSImage *alternatePhoneImage;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<PKPaymentAuthorizationFooterViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)setRemoteDevice:(id)a0;
- (void)_prepareConstraints;
- (void)_createSubviews;
- (void)backgroundViewClicked:(id)a0;
- (void)setRemoteDeviceType:(long long)a0 name:(id)a1;
- (void)setState:(long long)a0 text:(id)a1 animated:(BOOL)a2;
- (id)_sendWillPresentPasswordEntry;
- (void)_addPasswordViewToHierarchy;
- (void)_removePasswordViewFromHierarchy;
- (void)_applyRemoteDevice;
- (id)_statusTextForState:(long long)a0;

@end
