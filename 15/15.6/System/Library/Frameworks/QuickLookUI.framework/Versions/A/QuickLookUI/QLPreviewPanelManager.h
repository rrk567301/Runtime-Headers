@class NSArray, QLPreviewPanel, QLPreviewPanelManagerReserved;

@interface QLPreviewPanelManager : NSObject <QLPreviewPanelDataSource> {
    QLPreviewPanelManagerReserved *_reserved;
    char _showsAddToiPhotoButton;
    char _showsFullscreenButton;
    char _showsIndexSheetButton;
    long long _selectedItemIndex;
    QLPreviewPanel *_currentPanel;
    NSArray *_previewItems;
    id _delegate;
}

@property (copy) NSArray *previewItems;
@property char showsAddToiPhotoButton;
@property char showsFullscreenButton;
@property char showsIndexSheetButton;
@property (weak) id delegate;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (char)previewPanel:(id)a0 handleEvent:(id)a1;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (char)previewPanel:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)previewPanel:(id)a0 didChangeDisplayStateForPreviewItem:(id)a1;
- (void)startControllingPanel:(id)a0;
- (void)stopControllingPanel:(id)a0;

@end
