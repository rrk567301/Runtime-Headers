@class NSString, NSImage, STKStickerEffect, STKImageGlyph, STKAnimatedImage;

@interface STKStickerView : NSView {
    void /* unknown type, empty encoding */ placeholderView;
    void /* unknown type, empty encoding */ effectView;
    void /* unknown type, empty encoding */ imageView;
    void /* function */ usageSource;
    void /* unknown type, empty encoding */ animatedImage;
    void /* function */ dragPreviewLiftContainerProvider;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ currentFrameIndex;
    void /* unknown type, empty encoding */ initialFrameIndexForCurrentDrag;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ animatedPlaybackStartDate;
    void /* unknown type, empty encoding */ frameTimeCalculator;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ isSilhouetteImageVisible;
}

@property (nonatomic, copy) NSString *usageSource;
@property (nonatomic) BOOL isPaused;
@property (nonatomic, retain) STKStickerEffect *effect;
@property (nonatomic, readonly) NSImage *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (nonatomic, copy) id /* block */ dragPreviewLiftContainerProvider;
@property (nonatomic) BOOL boundsIncludeStroke;
@property (nonatomic, retain) STKImageGlyph *imageGlyph;
@property (nonatomic, readonly) BOOL isPlaceholderViewShown;
@property (nonatomic) BOOL wantsLayer;
@property (nonatomic, readonly) BOOL flipped;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)displayLinkDidFire:(id)a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)configureWithAnimatedImage:(id)a0 imageGlyph:(id)a1 effect:(id)a2;
- (id)currentImageWithEffectFlipped:(BOOL)a0;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)animatedImageForImageGlyph:(STKImageGlyph *)a0 completionHandler:(void (^)(STKAnimatedImage *))a1;
- (void)configureWithImage:(id)a0 imageGlyph:(id)a1 effect:(id)a2;
- (void)playSettlingAnimation;
- (void)updateEffect:(id)a0;

@end
