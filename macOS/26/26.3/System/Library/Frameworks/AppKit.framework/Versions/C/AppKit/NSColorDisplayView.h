@class NSColor, CALayer;

@interface NSColorDisplayView : NSView {
    CALayer *_diagonalLayer;
    CALayer *_transparentColorLayer;
    CALayer *_colorLayer;
}

@property (copy) NSColor *color;

+ (BOOL)clipsToBounds;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)setLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)updateLayer;
- (void)dealloc;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
