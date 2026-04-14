@class NSTimer, NSWindow;
@protocol ScreenSaverViewDelegate;

@interface ScreenSaverView : NSView {
    NSTimer *_animationTimer;
    double _timeInterval;
    BOOL _isPreview;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

@property (weak, nonatomic) id<ScreenSaverViewDelegate> delegate;
@property double animationTimeInterval;
@property (readonly, getter=isAnimating) BOOL animating;
@property (readonly) BOOL hasConfigureSheet;
@property (readonly) NSWindow *configureSheet;
@property (readonly, getter=isPreview) BOOL preview;

+ (unsigned long long)backingStoreType;
+ (BOOL)performGammaFade;
+ (BOOL)performGammaFadeForModuleWithPath:(id)a0;
+ (BOOL)spansScreens;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityTitle;
- (void)stopAnimation;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)clipsToBounds;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)setIsAnimating:(BOOL)a0;
- (void)setPreview:(BOOL)a0;
- (void)_resetTimer;
- (void)animateOneFrame;
- (void)displayMessage:(id)a0;
- (BOOL)_needsAnimationTimer;
- (void)_oneStep:(id)a0;
- (BOOL)hidEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1;
- (BOOL)isKeyboardInteractive;
- (BOOL)isMouseInteractive;
- (void)prepareToAnimate;
- (id)screenSaverModule;
- (void)setScreenSaverModule:(id)a0;

@end
