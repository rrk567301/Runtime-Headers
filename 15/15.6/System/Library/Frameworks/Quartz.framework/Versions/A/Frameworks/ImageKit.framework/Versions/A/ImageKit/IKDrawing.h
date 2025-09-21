@interface IKDrawing : NSObject

+ (id)imageNamed:(id)a0;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withCornerRadius:(float)a2 alignOnPixelCenter:(char)a3;
+ (id)_pathOfImageWithName:(id)a0 inBundle:(id)a1;
+ (void)drawBorderImage:(id)a0 middleImage:(id)a1 borderImage:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withOrientation:(unsigned long long)a4 flipped:(char)a5;
+ (void)drawBorderImage:(id)a0 middleImage:(id)a1 borderImage:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withOrientation:(unsigned long long)a4 flipped:(char)a5 operation:(unsigned long long)a6 fraction:(float)a7;
+ (void)drawImage:(id)a0 withBackgroundImage:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 fraction:(float)a3;
+ (id)imageNamed:(id)a0 fromBundle:(id)a1;
+ (char)loadCGImageNamed:(id)a0 fromBundle:(id)a1 into:(struct CGImage **)a2;
+ (char)loadCGImageNamed:(id)a0 into:(struct CGImage **)a1;
+ (char)loadNSImageNamed:(id)a0 fromBundle:(id)a1 into:(id *)a2;
+ (char)loadNSImageNamed:(id)a0 into:(id *)a1;
+ (void)pushLineFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 inContext:(struct CGContext { } *)a2;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withCornerRadius:(float)a2 topLeftCorner:(char)a3 topRightCorner:(char)a4 bottomRightCorner:(char)a5 bottomLeftCorner:(char)a6 alignOnPixelCenter:(char)a7;

@end
