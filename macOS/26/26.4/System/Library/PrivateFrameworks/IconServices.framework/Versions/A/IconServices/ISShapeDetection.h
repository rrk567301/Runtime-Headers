@interface ISShapeDetection : NSObject

+ (unsigned long long)categorizeShapeWithWidth:(int)a0 height:(int)a1 cornerRadius:(int)a2;
+ (double)standardCornerRadiusForSize:(double)a0;

- (BOOL)detectShapeInImageWithWidth:(int)a0 height:(int)a1 samples:(struct { int x0; int x1; int x2; unsigned int x3; void *x4; })a2 bounds:(void *)a3 cornerRadius:(int *)a4;
- (BOOL)detectShapeInCGImage:(struct CGImage { } *)a0 bounds:(void *)a1 cornerRadius:(int *)a2;

@end
