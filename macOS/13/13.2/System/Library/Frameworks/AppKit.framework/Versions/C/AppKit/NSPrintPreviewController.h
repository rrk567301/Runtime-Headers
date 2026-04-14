@class NSTextField, NSMapTable, NSView, NSPrintThumbnailView, NSSegmentedControl;

@interface NSPrintPreviewController : NSViewController {
    struct CGSize { double width; double height; } _maxViewFrameSize;
    NSPrintThumbnailView *thumbnailView;
    NSView *pageNumberView;
    NSSegmentedControl *pageNumberLeftControl;
    NSTextField *pageNumberTextField;
    NSSegmentedControl *pageNumberRightControl;
    double _pageNumberViewLeading;
    BOOL _isPreviewing;
    BOOL _isInStartOrStop;
    NSMapTable *_observedKeyPathsPerAccessoryController;
}

@property BOOL hasRealPrintingStarted;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_start;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (long long)_firstPageNumber;
- (long long)_lastPageNumber;
- (long long)_nUpPages;
- (void)_updatePrintPreviewDeferred;
- (void)_cancelDeferredPrintPreview;
- (void)printInfoDidChange:(id)a0;
- (void)_updatePrintPreview:(id)a0;
- (id)initWithOperation:(id)a0;
- (void)teardownForRealPrinting;
- (long long)_sheetNumberForRawPageNumber:(long long)a0;
- (long long)_sheetAlignedPageNumberForRawPageNumber:(long long)a0;
- (void)_updatePageNumberView;
- (void)_tileView;
- (BOOL)_checkOriginValidity:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_checkSizeValidity:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxViewFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_stop;
- (void)userClickedPageNumberControl:(id)a0;

@end
