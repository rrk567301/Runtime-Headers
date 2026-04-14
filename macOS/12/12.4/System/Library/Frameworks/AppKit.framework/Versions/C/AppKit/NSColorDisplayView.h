@class NSColor, CALayer;

@interface NSColorDisplayView : NSView {
    CALayer *_diagonalLayer;
    CALayer *_transparentColorLayer;
    CALayer *_colorLayer;
}

@property (copy) NSColor *color;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)layout;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;

@end
