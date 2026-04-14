@class NSArray;

@interface AVFunctionBarVideoTrackView : AVFunctionBarTrackView {
    NSArray *_filteredThumbnailImages;
}

@property BOOL showsThumbnails;

- (void).cxx_destruct;
- (id)_filterImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)filterAndDisplayThumbnails:(id)a0;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })previewLayerSize;
- (void)updatePreviewLayerContent;

@end
