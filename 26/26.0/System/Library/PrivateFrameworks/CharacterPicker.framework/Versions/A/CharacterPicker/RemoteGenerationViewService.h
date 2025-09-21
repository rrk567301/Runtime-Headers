@class STKEmojiGenerationViewControllerOLD;

@interface RemoteGenerationViewService : NSServiceViewController <CPKGenerationUIViewServiceProtocol>

@property (retain, nonatomic) STKEmojiGenerationViewControllerOLD *generationViewController;

- (id)exportedInterface;
- (void)loadView;
- (void)dealloc;
- (id)remoteViewControllerInterface;
- (void)makeKeyWindowAndFirstResponder:(BOOL)a0;
- (void)setScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowPositioning:(unsigned long long)a1;
- (void)closeOnboardingUIIfPresent;
- (void)didAddGenerativeEmoji:(id)a0;
- (void)didRequestClosingOfGenerationView:(id)a0;
- (void)didRequestDismissal:(id)a0;
- (void)didRequestMixmojiSelect:(id)a0;
- (void)didRequestRestoration:(id)a0;
- (BOOL)isMixmojiEnabled;
- (void)sendSelectedMixmojiImageGlyphIdentifier:(id)a0;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 prompt:(id)a1;
- (void)stopListeningToNotifications;

@end
