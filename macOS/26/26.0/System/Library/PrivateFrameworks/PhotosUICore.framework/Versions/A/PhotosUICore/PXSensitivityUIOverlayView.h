@class PHAsset, PHPhotoLibrary;

@interface PXSensitivityUIOverlayView : NSView

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long overlayKind;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 overlayKind:(long long)a2;
- (void)overrideAnalysis:(long long)a0 with:(id)a1;

@end
