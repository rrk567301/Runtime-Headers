@class WebFrame, NSView, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : NSView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) NSView<WebDocumentView> *documentView;
@property (nonatomic) char allowsScrolling;
@property (readonly, nonatomic) char canPrintHeadersAndFooters;
@property (readonly, nonatomic) char documentViewShouldHandlePrint;

+ (char)_canShowMIMETypeAsHTML:(id)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(char)a1;
+ (id)_viewTypesAllowImageTypeOmission:(char)a0;

- (void)dealloc;
- (void)scrollLineDown:(id)a0;
- (void)setNextKeyView:(id)a0;
- (void)scrollPageDown:(id)a0;
- (id)_contentView;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)keyDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (char)wantsUpdateLayer;
- (float)_area;
- (void)_goBack;
- (float)_verticalKeyboardScrollDistance;
- (Class)_customScrollViewClass;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (char)_firstResponderIsFormControl;
- (void)_frameSizeChanged;
- (void)_goForward;
- (char)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (char)_isFlippedDocument;
- (char)_isScrollable;
- (char)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (char)_pageHorizontally:(char)a0;
- (char)_pageInBlockProgressionDirection:(char)a0;
- (char)_pageVertically:(char)a0;
- (char)_scrollHorizontallyBy:(float)a0;
- (char)_scrollLineHorizontally:(char)a0;
- (char)_scrollLineVertically:(char)a0;
- (char)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (char)_scrollToBeginningOfDocument;
- (char)_scrollToEndOfDocument;
- (char)_scrollVerticallyBy:(float)a0;
- (id)_scrollView;
- (void)_setCustomScrollViewClass:(Class)a0;
- (void)_setDocumentView:(id)a0;
- (void)_setWebFrame:(id)a0;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)a0;
- (id)_webView;
- (struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })_web_frame;
- (id)_webcore_effectiveFirstResponder;
- (void)printDocumentView;
- (id)printOperationWithPrintInfo:(id)a0;

@end
