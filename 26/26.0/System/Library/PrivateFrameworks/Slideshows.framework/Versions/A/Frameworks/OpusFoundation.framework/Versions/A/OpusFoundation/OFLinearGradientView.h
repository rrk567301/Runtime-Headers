@class NSArray;

@interface OFLinearGradientView : OFNSView

@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)gradientLayer;
- (BOOL)wantsUpdateLayer;

@end
