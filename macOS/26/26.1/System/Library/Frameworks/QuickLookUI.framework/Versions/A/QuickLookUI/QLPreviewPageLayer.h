@class QLPreviewPageThumbnail, QLProgressIndicatorLayer, CALayer, QLPreviewHighlightItemLayer;

@interface QLPreviewPageLayer : CALayer

@property (retain) QLPreviewHighlightItemLayer *highlightLayer;
@property (retain) CALayer *contentLayer;
@property (retain) QLProgressIndicatorLayer *progressIndicatorLayer;
@property (nonatomic) int highlightMode;
@property (nonatomic) BOOL generating;
@property (weak) QLPreviewPageThumbnail *pageThumbnail;

- (void)layoutSublayers;
- (void)setContentsScale:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPageContents:(struct CGImage { } *)a0;
- (void)set_QLLayerAppearance:(id)a0;

@end
