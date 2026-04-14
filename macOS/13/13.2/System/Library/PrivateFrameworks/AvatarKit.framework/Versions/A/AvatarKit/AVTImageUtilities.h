@interface AVTImageUtilities : NSObject

+ (void)cropImageWhitespace:(struct CGImage { } *)a0 outsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 resultBlock:(id /* block */)a3;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })transparencyInsetsForImage:(struct CGImage { } *)a0 requiringFullOpacity:(BOOL)a1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0 requiringFullOpacity:(BOOL)a1;

@end
