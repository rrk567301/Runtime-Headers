@class NSColor, NSObject;
@protocol CAAnimationDelegate;

@interface FI_TView : NSView {
    NSColor *_backgroundColor;
}

@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) BOOL isFlipped;
@property (nonatomic) BOOL isOpaque;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;
@property (weak, nonatomic) NSObject<CAAnimationDelegate> *animationDelegate;
@property (nonatomic) BOOL shouldBeVibrant;

+ (void)notifyView:(id)a0 willMoveToSuperview:(id)a1;
+ (void)notifyView:(id)a0 willMoveToWindow:(id)a1;
+ (void)notifyViewDidChangeBackingProperties:(id)a0;
+ (void)notifyViewDidMoveToSuperview:(id)a0;
+ (void)notifyViewDidMoveToWindow:(id)a0;
+ (void)notifyWindowChangedKeyState:(id)a0;

- (void)viewWillMoveToWindow:(id)a0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidChangeBackingProperties;
- (void)initCommon;
- (void).cxx_destruct;
- (void)_windowChangedKeyState;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setWantsLayer:(BOOL)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)configureAnimations:(BOOL)a0;

@end
