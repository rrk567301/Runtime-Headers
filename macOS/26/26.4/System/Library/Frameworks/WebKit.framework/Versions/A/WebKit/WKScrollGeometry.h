@interface WKScrollGeometry : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;

- (BOOL)isEqual:(id)a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 contentSize:(struct CGSize { double x0; double x1; })a3;

@end
