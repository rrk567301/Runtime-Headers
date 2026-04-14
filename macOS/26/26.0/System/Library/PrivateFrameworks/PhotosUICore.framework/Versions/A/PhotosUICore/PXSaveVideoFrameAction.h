@class PHAsset, AVAssetImageGenerator;

@interface PXSaveVideoFrameAction : PXPhotosAction

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) AVAssetImageGenerator *assetImageGenerator;
@property (retain, nonatomic) PHAsset *createdAsset;
@property (nonatomic) int imageRequestID;

+ (id)_fileType;
+ (id)_fileExtension;
+ (id)_stillFilenameForVideoAsset:(id)a0;
+ (id)_stillRenderURLForVideoAsset:(id)a0 error:(id *)a1;
+ (BOOL)canPerformOnAsset:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (void)_handleAssetImageGenerator:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleGeneratedImage:(struct CGImage { } *)a0 completionHandler:(id /* block */)a1;
- (id)actionNameLocalizationKey;
- (id)initWithAsset:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithAsset:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 assetImageGenerator:(id)a2;

@end
