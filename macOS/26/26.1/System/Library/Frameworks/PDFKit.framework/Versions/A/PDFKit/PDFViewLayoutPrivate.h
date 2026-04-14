@class NSLock, PDFDocument;

@interface PDFViewLayoutPrivate : NSObject {
    id delegate;
    BOOL delegateKnowsMargins;
    BOOL delegateKnowsDisplayMode;
    BOOL delegateKnowsDisplayAsBook;
    BOOL delegateKnowsDisplayBox;
    BOOL delegateKnowsDisplayRTL;
    BOOL delegateKnowsDisplaysDirection;
    BOOL delegateKnowsDocumentMargins;
    BOOL delegateKnowsHasEnabledSwipeGestures;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct CGRect *__cap_; } pageLayoutBounds;
    struct CGSize { double width; double height; } singlePageContinuousSize;
    struct CGSize { double width; double height; } twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
