@class STKEmojiGenerationViewController;

@interface RemoteGenerationViewService : NSServiceViewController <CPKGenerationUIViewServiceProtocol>

@property (retain, nonatomic) STKEmojiGenerationViewController *generationViewController;

- (void)dealloc;
- (id)exportedInterface;
- (void)loadView;
- (id)remoteViewControllerInterface;
- (void)closeOnboardingUIIfPresent;
- (void)didAddGenerativeEmoji:(id)a0;
- (void)didRequestClosingOfGenerationView:(id)a0;
- (void)didRequestDismissal:(id)a0;
- (void)didRequestRestoration:(id)a0;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 prompt:(id)a1;

@end
