@class NSColor, NSString, NSAppearance;

@interface NSColorPanelFavoriteSwatchView : NSView <NSCollectionViewElement>

@property (class, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

@property (copy) NSColor *color;
@property (retain) NSAppearance *appearanceForRenderingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (BOOL)needsPanelToBecomeKey;

@end
