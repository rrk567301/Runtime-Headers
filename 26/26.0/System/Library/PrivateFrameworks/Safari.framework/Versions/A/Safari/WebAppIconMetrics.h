@interface WebAppIconMetrics : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double shadowBlur;
@property (readonly, nonatomic) struct CGSize { double width; double height; } shadowOffset;

- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 shadowBlur:(double)a3 shadowOffset:(struct CGSize { double x0; double x1; })a4;

@end
