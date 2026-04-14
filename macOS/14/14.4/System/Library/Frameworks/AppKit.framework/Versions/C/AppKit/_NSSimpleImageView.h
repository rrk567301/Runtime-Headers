@class NSImage, RBSymbolLayer;
@protocol NSContentStyle;

@interface _NSSimpleImageView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRectFrame;
    BOOL _shouldUseRBSymbolLayer;
    RBSymbolLayer *_symbolLayer;
}

@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) id<NSContentStyle> imageContentStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectFrame;

- (id)initWithCoder:(id)a0;
- (void)_enableSymbolEffectsIfNecessary;
- (void)_configureSymbolLayer;
- (void)_ensureRBLayer;
- (BOOL)_isSymbolAndRBLayerImageView;
- (void)_teardownRBLayerIfNeeded;
- (void)addSymbolEffect:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionFromAlignmentRectFrame;
- (void)removeAllSymbolEffectsWithOptions:(id)a0 animated:(BOOL)a1;
- (void)removeSymbolEffectOfType:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (void)setSymbolImage:(id)a0 withContentTransition:(id)a1 options:(id)a2;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
