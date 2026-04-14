@interface AVTImageUtilities : NSObject

+ (void)cropImageWhitespace:(id)a0 upToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 resultBlock:(id /* block */)a2;
+ (struct CGImage { } *)CGImageFromImage:(id)a0;
+ (double)scaleFromImage:(id)a0;
+ (id)imageFromCGImage:(struct CGImage { } *)a0 scale:(double)a1;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })transparencyInsetsForImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (id)cropImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0 requiringFullOpacity:(BOOL)a1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)a0;

@end
