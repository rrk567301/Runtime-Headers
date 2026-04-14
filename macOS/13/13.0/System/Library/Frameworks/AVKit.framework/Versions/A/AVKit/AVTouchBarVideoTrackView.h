@class NSMutableArray;

@interface AVTouchBarVideoTrackView : AVTouchBarTrackView {
    NSMutableArray *_thumbnailsAndFilteredImages;
    BOOL _allPreviewLayersHaveContent;
}

+ (double)thumbnailGenerationToleranceForNumberOfThumbnails:(unsigned long long)a0 contentDuration:(double)a1;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })previewLayerSize;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (void)updatePreviewLayerContent;
- (id)_filterImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)makePreviewLayer;
- (BOOL)allPreviewLayersHaveContent;
- (struct CGSize { double x0; double x1; })sizeForPreviewLayerWithIndex:(long long)a0;
- (void)addThumbnails:(id)a0;
- (void)removeAllThumbnails;
- (double)thumbnailGenerationToleranceForCurrentSize;
- (id)thumbnailForTime:(double)a0;
- (void)updatePreviewLayerContentForThumbnailsAndFilteredImages:(id)a0;

@end
