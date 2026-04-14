@class CUIRenditionKey, CSIBitmapWrapper;

@interface CUICatalogCSIGenerator : CSIGenerator

@property (retain, nonatomic) CUIRenditionKey *baseKey;
@property (retain, nonatomic) CSIBitmapWrapper *flattenedBitmap;

- (void)dealloc;
- (void)addLayerReference:(id)a0 withImage:(struct CGImage { } *)a1 atScale:(long long)a2;
- (id)initWithLayerStackData:(id)a0 type:(long long)a1 withCanvasSize:(struct CGSize { double x0; double x1; })a2 isOpaque:(BOOL)a3 allowsWide:(BOOL)a4 atScale:(long long)a5;

@end
