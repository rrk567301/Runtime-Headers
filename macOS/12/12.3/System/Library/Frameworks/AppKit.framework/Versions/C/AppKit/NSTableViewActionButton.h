@class NSTextField, NSString, NSImage, NSImageView, NSTableViewRowAction, NSColor;

@interface NSTableViewActionButton : NSControl <NSAccessibilityButton> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })layoutStateForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_alignedOriginForWidth:(double)a0 inset:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
