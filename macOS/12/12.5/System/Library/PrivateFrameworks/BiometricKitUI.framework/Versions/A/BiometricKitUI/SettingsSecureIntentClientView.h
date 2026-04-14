@class NSTextField, BKMesaSecureIntentProvider, NSImage, NSView, NSString, BKUIDeviceImageView, NSButton;

@interface SettingsSecureIntentClientView : NSView <SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *mesaEnrollTutorDeviceView;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) NSTextField *securePromptMessageTitle;
@property (retain, nonatomic) NSTextField *securePromptMessageSubTitle;
@property (retain, nonatomic) NSView *mesaEnrollTextContainer;
@property (retain, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelButtonPressed:(id)a0;
- (BOOL)_isJ375;
- (void)_setupLabel:(id)a0;
- (void)layoutSecureIntentImageView;
- (void)layoutSecureIntentEnrollTextContainer;
- (BOOL)shouldShowRightImageLayoutForMacMinis;
- (void)showRetryOnErrorUI;
- (void)showInitialUI;

@end
