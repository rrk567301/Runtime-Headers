@class BKUIDevice, NSString, BKUIDeviceImageView, BKMesaSecureIntentProvider;

@interface BuddySecureIntentClientView : OBTemplateView <SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *deviceImageView;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (weak, nonatomic) BKUIDevice *currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForBKUIDevice:(id)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)promptTitle;
- (void)showInitialUI;
- (void)showRetryOnErrorUI;

@end
