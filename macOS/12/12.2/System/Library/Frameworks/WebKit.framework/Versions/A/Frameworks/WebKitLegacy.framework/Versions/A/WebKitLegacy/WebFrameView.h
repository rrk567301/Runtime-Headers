@class WebFrame, NSView, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : NSView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) NSView<WebDocumentView> *documentView;
@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) BOOL canPrintHeadersAndFooters;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;

+ (id)_viewTypesAllowImageTypeOmission:(BOOL)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;
+ (BOOL)_canShowMIMETypeAsHTML:(id)a0;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)_scrollView;
- (BOOL)acceptsFirstResponder;
- (id)_contentView;
- (void)setNextKeyView:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)keyDown:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollPageDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollLineDown:(id)a0;
- (id)_webView;
- (float)_area;
- (void)_setWebFrame:(id)a0;
- (void)_setDocumentView:(id)a0;
- (Class)_viewClassForMIMEType:(id)a0;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (void)_install;
- (float)_verticalKeyboardScrollDistance;
- (struct NakedPtr<WebCore::Frame> { struct Frame *x0; })_web_frame;
- (float)_verticalPageScrollDistance;
- (void)_frameSizeChanged;
- (BOOL)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (BOOL)_isScrollable;
- (BOOL)_isVerticalDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_scrollToBeginningOfDocument;
- (id)_largestScrollableChild;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_pageVertically:(BOOL)a0;
- (BOOL)_scrollVerticallyBy:(float)a0;
- (BOOL)_pageHorizontally:(BOOL)a0;
- (float)_horizontalPageScrollDistance;
- (BOOL)_scrollHorizontallyBy:(float)a0;
- (BOOL)_scrollLineVertically:(BOOL)a0;
- (BOOL)_scrollLineHorizontally:(BOOL)a0;
- (float)_horizontalKeyboardScrollDistance;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)a0;
- (void)_goForward;
- (void)_goBack;
- (BOOL)_firstResponderIsFormControl;
- (id)_webcore_effectiveFirstResponder;
- (id)printOperationWithPrintInfo:(id)a0;
- (void)printDocumentView;
- (BOOL)_hasScrollBars;
- (id)_largestChildWithScrollBars;
- (Class)_customScrollViewClass;
- (void)_setCustomScrollViewClass:(Class)a0;

@end
