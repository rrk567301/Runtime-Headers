@class NSImageView;

@interface UAOnboardingZoomCustomViewController : NSViewController

@property (retain, nonatomic) NSImageView *_dotsImageView;
@property (retain, nonatomic) NSImageView *_keyImageView;
@property (retain, nonatomic) NSImageView *_zoomBackgroundView;
@property (retain, nonatomic) NSImageView *_mouseImageView;

- (void)viewDidAppear;
- (void)_setup;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_constrainView;
- (void)_setupScrollAnimation;
- (void)_setupZoomAnimation;
- (BOOL)_shouldShowSingleDotScroll;
- (void)setZoomBackgroundViewImage:(id)a0;

@end
