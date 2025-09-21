@class NSTimer, NSWindow;

@interface ScreenSaverView : NSView {
    NSTimer *_animationTimer;
    double _timeInterval;
    char _isPreview;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

@property double animationTimeInterval;
@property (readonly, getter=isAnimating) char animating;
@property (readonly) char hasConfigureSheet;
@property (readonly) NSWindow *configureSheet;
@property (readonly, getter=isPreview) char preview;

+ (unsigned long long)backingStoreType;
+ (char)performGammaFade;
+ (char)performGammaFadeForModuleWithPath:(id)a0;
+ (char)spansScreens;

- (void)dealloc;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (char)clipsToBounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setIsAnimating:(char)a0;
- (void)setPreview:(char)a0;
- (void)_resetTimer;
- (void)animateOneFrame;
- (void)displayMessage:(id)a0;
- (char)_needsAnimationTimer;
- (void)_oneStep:(id)a0;
- (char)hidEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(char)a1;
- (char)isKeyboardInteractive;
- (char)isMouseInteractive;
- (void)prepareToAnimate;
- (id)screenSaverModule;
- (void)setScreenSaverModule:(id)a0;

@end
