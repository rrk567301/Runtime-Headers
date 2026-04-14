@class NSData;

@interface PFParallaxDataLayer : PFParallaxLayer

@property (readonly, copy, nonatomic) NSData *data;

+ (id)fileExtension;

- (struct CGSize { double x0; double x1; })pixelSize;
- (void).cxx_destruct;
- (id)fileExtension;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zPosition:(double)a2 identifier:(id)a3;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
