@class NSTextField, NSString, NSImage, NSImageView, NSTableViewRowAction, NSColor;

@interface NSTableViewActionButton : NSControl {
    NSTextField *_label;
    NSImageView *_imageView;
}

@property (getter=isHighlighted) char highlighted;
@property (copy) NSColor *backgroundColor;
@property (retain) NSTableViewRowAction *rowAction;
@property struct CGSize { double width; double height; } requiredSize;
@property double continuousAlignment;
@property (copy) NSString *title;
@property (copy) NSImage *image;
@property unsigned long long maskedCornersMask;
@property double cornerRadius;

+ (char)accessibilityIsSingleCelled;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void)layout;
- (char)_accessibilityIsTableViewDescendant;
- (double)_alignedOriginForWidth:(double)a0 inset:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityParentAttribute;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (struct { char x0; char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })layoutStateForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (char)wantsLayer;

@end
