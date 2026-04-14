@class NSString, NSImage, NSColor;

@interface UXImageView : UXView <NSAccessibilityImage> {
    double _backingScaleFactor;
    struct CGSize { double width; double height; } _proposedSize;
}

@property (retain, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSImage *_currentImage;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *highlightedImage;
@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) long long preferredImageDynamicRange;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL allowsVibrancy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidChangeEffectiveAppearance;
- (void)sizeToFit;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_proposedSize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateLayerContents;
- (double)_maximumEDRForDynamicRange:(long long)a0;
- (void)_setContentStretchInPixels:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentSize:(struct CGSize { double x0; double x1; })a1 shouldTile:(BOOL)a2;
- (void)_updateBackingScaleFactorForWindow:(id)a0;
- (void)_updateForCurrentImage;
- (void)_updateLayerContentsForWindow:(id)a0;
- (void)_updateProposedSize;

@end
