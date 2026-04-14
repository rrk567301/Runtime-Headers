@class PACropModeDrawingDelegate;

@interface PACropMode : PAImageItemViewDefaultMode

@property (retain) PACropModeDrawingDelegate *drawingDelegate;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } inversePreviewTransform;
@property (copy) id /* block */ _cropImageReadyHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)compositionReplacedFilter;
- (void)loadWithConfiguration:(id)a0 display:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)imageAssetTypeForKey:(id)a0;
- (void)updateAssetClient:(id)a0 forKey:(id)a1 withConfiguration:(id)a2;
- (BOOL)isEqualToMode:(id)a0;
- (void)activateWithView:(id)a0;
- (void)updateImageView:(id)a0 withImage:(id)a1 forKey:(id)a2;
- (BOOL)cropImageReady:(id /* block */)a0;
- (void)deactivateWithView:(id)a0;
- (void)compositionForAssetType:(id)a0 imageItemController:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
