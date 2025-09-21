@interface PFParallaxSpatialPhotoOcclusionLayer : PFParallaxLayer

+ (id)fileExtension;

- (struct CGSize { double x0; double x1; })pixelSize;
- (id)fileExtension;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zPosition:(double)a1 identifier:(id)a2;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
