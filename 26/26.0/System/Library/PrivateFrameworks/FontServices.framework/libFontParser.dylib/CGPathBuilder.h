@interface CGPathBuilder : NSObject {
    struct CGPath { } *path;
}

@property BOOL overlaps;

- (struct CGPath { } *)copyPath;
- (void)dealloc;
- (void)moveTo:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (void)endPath;
- (void)cubicCurveTo:(struct CGPoint { double x0; double x1; })a0 control1:(struct CGPoint { double x0; double x1; })a1 control2:(struct CGPoint { double x0; double x1; })a2;
- (void)lineTo:(struct CGPoint { double x0; double x1; })a0;
- (void)quadCurveTo:(struct CGPoint { double x0; double x1; })a0 control:(struct CGPoint { double x0; double x1; })a1;

@end
