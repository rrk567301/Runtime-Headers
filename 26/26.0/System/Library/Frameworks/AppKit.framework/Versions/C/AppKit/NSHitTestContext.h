@interface NSHitTestContext : NSObject

@property (readonly) struct CGPoint { double x; double y; } point;
@property (readonly) double radius;

+ (id)contextWithPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;

- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;

@end
