@class NSColor, CALayer;

@interface MOUIProgressBar : NSView {
    CALayer *_progressBarLayer;
}

@property (nonatomic) float progress;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSColor *borderColor;
@property (retain, nonatomic) NSColor *backgroundColor;

- (void)updateLayer;
- (void)layout;
- (id)initWithWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wantsUpdateLayer;

@end
