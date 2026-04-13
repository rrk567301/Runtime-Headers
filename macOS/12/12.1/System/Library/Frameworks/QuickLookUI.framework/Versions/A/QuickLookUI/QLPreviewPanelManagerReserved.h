@class NSArray, QLPreviewPanel;

@interface QLPreviewPanelManagerReserved : NSObject {
    BOOL showsAddToiPhotoButton;
    BOOL showsFullscreenButton;
    BOOL showsIndexSheetButton;
    long long selectedItemIndex;
    QLPreviewPanel *currentPanel;
    NSArray *previewItems;
    id delegate;
}

- (void)dealloc;

@end
