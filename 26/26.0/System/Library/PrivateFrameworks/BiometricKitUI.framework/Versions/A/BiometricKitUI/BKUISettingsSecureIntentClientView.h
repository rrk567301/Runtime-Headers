@class NSTextField, NSView, NSString, BKUIDeviceImageView, BKMesaSecureIntentProvider, NSImage, BKUIDevice, NSButton;

@interface BKUISettingsSecureIntentClientView : OBTemplateView <CALayerDelegate, SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *mesaEnrollTutorDeviceView;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) NSTextField *securePromptMessageTitle;
@property (retain, nonatomic) NSTextField *securePromptMessageSubTitle;
@property (retain, nonatomic) NSView *mesaEnrollTextContainer;
@property (retain, nonatomic) NSButton *cancelButton;
@property (nonatomic) BOOL inDemo;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (weak, nonatomic) BKUIDevice *currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_BKUIContentSize;
+ (id)instanceForBKUIDevice:(id)a0;
+ (id)instanceForDemo:(BOOL)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (id)promptTitle;
- (void)_setupLabel:(id)a0;
- (id)initInDemo:(BOOL)a0 withBKUIDevice:(id)a1;
- (void)layoutSecureIntentEnrollTextContainer;
- (void)layoutSecureIntentImageView;
- (BOOL)shouldShowRightImageLayoutForMacMinis;
- (void)showInitialUI;
- (void)showRetryOnErrorUI;

@end
