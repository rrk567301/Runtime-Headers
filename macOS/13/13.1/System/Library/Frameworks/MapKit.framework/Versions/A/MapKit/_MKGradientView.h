@class NSColor, NSArray;

@interface _MKGradientView : NSView

@property (nonatomic) BOOL shouldReduceTransparency;
@property (copy, nonatomic) NSColor *accessibilityColor;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (BOOL)isFlipped;
- (void)_setup;
- (id)gradientLayer;

@end
