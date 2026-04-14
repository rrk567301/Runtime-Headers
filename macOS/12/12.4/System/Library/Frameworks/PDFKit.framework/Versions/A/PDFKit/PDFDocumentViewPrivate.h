@class PDFAccessibilityDocumentController, NSArray, PDFDocumentContentView, NSMutableDictionary, PDFDocument, PDFView, PDFRenderingProperties, PDFPageBackgroundManager;

@interface PDFDocumentViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize { double width; double height; } documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    BOOL ignoreChangedBoundsForBoxNotification;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
    NSArray *accessibilityPageElements;
    PDFAccessibilityDocumentController *accessibilityDocumentController;
}

- (void).cxx_destruct;

@end
