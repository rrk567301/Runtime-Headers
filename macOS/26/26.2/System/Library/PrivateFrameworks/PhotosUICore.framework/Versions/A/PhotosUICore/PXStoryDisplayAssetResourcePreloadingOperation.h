@class NSError, PXMediaProvider;
@protocol PXDisplayAsset, PXStoryResource;

@interface PXStoryDisplayAssetResourcePreloadingOperation : PXAsyncOperation

@property double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) id<PXStoryResource> resource;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayAssetResource:(id)a0 mediaProvider:(id)a1;
- (void)px_finishIfPossible;
- (void)px_start;

@end
