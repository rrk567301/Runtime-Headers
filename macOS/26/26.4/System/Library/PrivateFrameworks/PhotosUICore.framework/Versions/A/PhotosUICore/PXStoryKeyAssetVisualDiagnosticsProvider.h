@class PXStoryVisualDiagnosticsProviderHelper, PXStoryModel;

@interface PXStoryKeyAssetVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>

@property (readonly, nonatomic) PXStoryVisualDiagnosticsProviderHelper *helper;
@property (readonly, nonatomic) PXStoryModel *model;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_requestPotentialKeyAssetsWithResultHandler:(id /* block */)a0;
- (void)_requestThumbnailTimelineWithKeyAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;

@end
