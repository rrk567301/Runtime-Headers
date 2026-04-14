@class NSTextField, BKMesaSecureIntentProvider, NSImage, NSView, NSString, BKUIDeviceImageView, NSButton;

@interface BKUISettingsSecureIntentClientView : NSView <SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *mesaEnrollTutorDeviceView;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) NSTextField *securePromptMessageTitle;
@property (retain, nonatomic) NSTextField *securePromptMessageSubTitle;
@property (retain, nonatomic) NSView *mesaEnrollTextContainer;
@property (retain, nonatomic) NSButton *cancelButton;
@property (nonatomic) BOOL inDemo;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;
+ (id)instanceForDemo:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })_BKUIContentSize;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)_setupLabel:(id)a0;
- (BOOL)_isJ375;
- (void)showRetryOnErrorUI;
- (void)showInitialUI;
- (id)initInDemo:(BOOL)a0;
- (void)layoutSecureIntentEnrollTextContainer;
- (void)layoutSecureIntentImageView;
- (BOOL)shouldShowRightImageLayoutForMacMinis;

@end
