@class NSString, PXCuratedLibraryViewModel, PXCuratedLibraryLayout;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider> {
    PXCuratedLibraryViewModel *_viewModel;
    long long _presentedZoomLevel;
    long long _newZoomLevel;
}

@property (retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_canPlayVideosInZoomLevel:(long long)a0;
- (BOOL)canPlayAsset:(id)a0;
- (BOOL)canProvideGeometriesForRecords;
- (BOOL)canUpdatePlayingRecords;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentVisibleRect;
- (void)didUpdatePlayingRecords;
- (void)enumerateRectDiagnosticsForLayout:(id)a0 usingBlock:(id /* block */)a1;
- (id)filterSortedRecordsToPlay:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (id)initViewViewModel:(id)a0;
- (long long)maxNumberOfPlayingItems;
- (id)pixelBufferSourceForDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)a0 pixelBufferSource:(id)a1;
- (BOOL)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)a0;
- (BOOL)shouldEnablePlayback;

@end
