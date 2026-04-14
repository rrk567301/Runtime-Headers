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
+ (BOOL)_canShowMIMETypeAsHTML:(id)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (id)_scrollView;
- (BOOL)acceptsFirstResponder;
- (id)_contentView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNextKeyView:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollPageDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollLineDown:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (id)_webView;
- (float)_area;
- (float)_verticalKeyboardScrollDistance;
- (struct NakedPtr<WebCore::Frame> { struct Frame *x0; })_web_frame;
- (void)_setDocumentView:(id)a0;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (void)_setWebFrame:(id)a0;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)a0;
- (void)_install;
- (void)_frameSizeChanged;
- (id)_webcore_effectiveFirstResponder;
- (id)printOperationWithPrintInfo:(id)a0;
- (void)printDocumentView;
- (BOOL)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (BOOL)_isVerticalDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (void)_goBack;
- (void)_goForward;
- (BOOL)_scrollVerticallyBy:(float)a0;
- (BOOL)_scrollHorizontallyBy:(float)a0;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (BOOL)_pageVertically:(BOOL)a0;
- (BOOL)_pageHorizontally:(BOOL)a0;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)a0;
- (BOOL)_scrollLineVertically:(BOOL)a0;
- (BOOL)_scrollLineHorizontally:(BOOL)a0;
- (BOOL)_firstResponderIsFormControl;
- (BOOL)_isScrollable;
- (id)_largestScrollableChild;
- (BOOL)_hasScrollBars;
- (id)_largestChildWithScrollBars;
- (Class)_customScrollViewClass;
- (void)_setCustomScrollViewClass:(Class)a0;

@end
