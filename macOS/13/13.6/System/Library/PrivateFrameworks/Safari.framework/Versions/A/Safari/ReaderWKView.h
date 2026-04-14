@class NSString, ReaderViewController, _WKRemoteObjectInterface;
@protocol ReaderBundlePageMessageReceiver;

@interface ReaderWKView : SearchableWKView <ReaderControllerMessageReceiver> {
    id<ReaderBundlePageMessageReceiver> _readerBundlePageMessageReceiverProxy;
    _WKRemoteObjectInterface *_readerControllerMessageReceiverInterface;
}

@property (readonly, nonatomic) id<ReaderBundlePageMessageReceiver> readerBundlePageMessageReceiver;
@property (readonly, nonatomic) ReaderViewController *readerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)accessibilityParent;
- (id)accessibilityWindow;
- (void)scrollWheel:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)presentingBrowserViewController;
- (void *)_readerController;
- (void)articleScrolled:(id)a0;
- (void)contentIsReadyForDisplayWithScrollOffset:(double)a0 articleText:(id)a1;
- (void)didChangeNextPageLoadingState;
- (void)didGetPrintingFrame:(id)a0;
- (BOOL)handleScrollEventAsSwipeGesture:(id)a0;
- (id)initWithReaderViewController:(id)a0 configuration:(id)a1;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)setArticleBaseURL:(id)a0;
- (id)tabContentView;

@end
