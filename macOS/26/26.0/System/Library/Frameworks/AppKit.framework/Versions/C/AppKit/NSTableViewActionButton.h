@class NSTextField, NSString, NSImage, NSImageView, NSTableViewRowAction, NSView, NSColor;

@interface NSTableViewActionButton : NSControl {
    NSTextField *_label;
    NSImageView *_imageView;
    NSView *_imagePlatter;
    BOOL _hasPopped;
    BOOL _configuredForSolarium;
}

@property (getter=isHighlighted) BOOL highlighted;
@property (copy) NSColor *backgroundColor;
@property (retain) NSTableViewRowAction *rowAction;
@property struct CGSize { double width; double height; } requiredSize;
@property double continuousAlignment;
@property (copy) NSString *title;
@property (copy) NSImage *image;
@property unsigned long long maskedCornersMask;
@property double cornerRadius;

+ (BOOL)accessibilityIsSingleCelled;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (id)accessibilityIdentifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (id)accessibilityRole;
- (void)viewDidChangeEffectiveAppearance;
- (void)_reconfigureForSolariumIfNeeded;
- (BOOL)_accessibilityIsTableViewDescendant;
- (double)_alignedOriginForWidth:(double)a0 inset:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_popIn;
- (void)_prepareForConsumeAppearance:(BOOL)a0;
- (void)_prepareForDismissAppearance:(BOOL)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityPerformPress;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })layoutStateForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsLayer;

@end
