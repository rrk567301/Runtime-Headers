@class NSTimer;

@interface WKPrintingView : NSView {
    struct WeakObjCPtr<NSPrintOperation> { id m_weakReference; } _printOperation;
    struct RetainPtr<NSView> { void *m_ptr; } _wkView;
    struct RefPtr<WebKit::WebFrameProxy, WTF::RawPtrTraits<WebKit::WebFrameProxy>, WTF::DefaultRefDerefTraits<WebKit::WebFrameProxy>> { struct WebFrameProxy *m_ptr; } _webFrame;
    struct Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct IntRect *m_buffer; unsigned int m_capacity; unsigned int m_size; } _printingPageRects;
    double _totalScaleFactorForPrinting;
    struct HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::DefaultHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap>>, WTF::HashTableTraits> { struct HashTable<WebCore::IntRect, WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>>>, WTF::DefaultHash<WebCore::IntRect>, WTF::HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>>::KeyValuePairTraits, WTF::HashTraits<WebCore::IntRect>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _pagePreviews;
    struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { char *m_buffer; unsigned int m_capacity; unsigned int m_size; } _printedPagesData;
    struct RetainPtr<PDFDocument> { void *m_ptr; } _printedPagesPDFDocument;
    struct Vector<WTF::Vector<WTF::RetainPtr<PDFDestination>, 0, WTF::CrashOnOverflow, 16>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _linkDestinationsPerPage;
    unsigned long long _expectedComputedPagesCallback;
    struct HashMap<unsigned long long, WebCore::IntRect, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTableTraits> { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::IntRect>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::IntRect>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::IntRect>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _expectedPreviewCallbacks;
    unsigned long long _latestExpectedPreviewCallback;
    unsigned long long _expectedPrintCallback;
    BOOL _isPrintingFromSecondaryThread;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _printingCallbackMutex;
    struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } _printingCallbackCondition;
    NSTimer *_autodisplayResumeTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;
- (struct CGPoint { double x0; double x1; })locationOfPrintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)drawPageBorderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginDocument;
- (void)endDocument;
- (void)_adjustPrintingMarginsForHeaderAndFooter;
- (id)initWithFrameProxy:(void *)a0 view:(id)a1;
- (void)_setAutodisplay:(BOOL)a0;
- (void)_delayedResumeAutodisplayTimerFired;
- (unsigned long long)_firstPrintedPageNumber;
- (unsigned long long)_lastPrintedPageNumber;
- (void)_suspendAutodisplay;
- (BOOL)_hasPageRects;
- (BOOL)_askPageToComputePageRects;
- (unsigned long long)_expectedPreviewCallbackForRect:(const struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } *)a0;
- (BOOL)_isPrintingPreview;
- (void)_drawPreview:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)_pageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawPDFDocument:(id)a0 page:(unsigned int)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_drawPageBorderWithSizeOnMainThread:(struct CGSize { double x0; double x1; })a0;
- (void)_delayedResumeAutodisplay;
- (void)_updatePreview;
- (void)_preparePDFDataForPrintingOnSecondaryThread;

@end
