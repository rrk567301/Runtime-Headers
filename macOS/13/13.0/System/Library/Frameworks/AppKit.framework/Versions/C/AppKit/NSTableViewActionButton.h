@class NSTextField, NSString, NSImage, NSImageView, NSTableViewRowAction, NSColor;

@interface NSTableViewActionButton : NSControl {
    NSTextField *_label;
    NSImageView *_imageView;
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

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (BOOL)accessibilityIsSingleCelled;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityParentAttribute;
- (BOOL)_accessibilityIsTableViewDescendant;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (BOOL)wantsLayer;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_alignedOriginForWidth:(double)a0 inset:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })layoutStateForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
