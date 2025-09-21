@class NSLock, PDFDocument;

@interface PDFViewLayoutPrivate : NSObject {
    id delegate;
    char delegateKnowsMargins;
    char delegateKnowsDisplayMode;
    char delegateKnowsDisplayAsBook;
    char delegateKnowsDisplayBox;
    char delegateKnowsDisplayRTL;
    char delegateKnowsDisplaysDirection;
    char delegateKnowsDocumentMargins;
    BOOL delegateKnowsHasEnabledSwipeGestures;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *pageLayoutBounds;
    struct CGSize { double width; double height; } singlePageContinuousSize;
    struct CGSize { double width; double height; } twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (void).cxx_destruct;

@end
