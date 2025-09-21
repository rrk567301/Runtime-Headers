@class NSImage, NSError, PXImageRequestOptions;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequest : NSObject

@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) PXImageRequestOptions *options;
@property (nonatomic) long long requestID;
@property (nonatomic) NSImage *image;
@property (nonatomic) char gotFullQualityImage;
@property (nonatomic) char resultIsInCloud;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isCanceled) char canceled;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 options:(id)a3;
- (void)performWithResultHandler:(id /* block */)a0;

@end
