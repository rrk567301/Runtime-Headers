@class NSString, ReaderViewController, _WKRemoteObjectInterface, NSMutableDictionary;
@protocol ReaderBundlePageMessageReceiver;

@interface ReaderWKView : SearchableWKView <ReaderControllerMessageReceiver> {
    id<ReaderBundlePageMessageReceiver> _readerBundlePageMessageReceiverProxy;
    _WKRemoteObjectInterface *_readerControllerMessageReceiverInterface;
    unsigned long long _nextSnapshotRequestIdentifier;
    NSMutableDictionary *_snapshotRequestCompletionHandlers;
}

@property (readonly, nonatomic) id<ReaderBundlePageMessageReceiver> readerBundlePageMessageReceiver;
@property (readonly, nonatomic) ReaderViewController *readerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityParent;
- (id)accessibilityWindow;
- (void)scrollWheel:(id)a0;
- (id)tabContentView;
- (void *)_readerController;
- (void)createVisibleContentsSnapshotWithMaximumSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (id)presentingBrowserViewController;
- (void)didGetPrintingFrame:(id)a0;
- (void)didCreateSnapshot:(id)a0 forRequestIdentifier:(unsigned long long)a1;
- (id)initWithReaderViewController:(id)a0 configuration:(id)a1;
- (void)didChangeNextPageLoadingState;
- (void)articleScrolled:(id)a0;
- (void)contentIsReadyForDisplayWithScrollOffset:(double)a0 languageTag:(id)a1;
- (void)setArticleBaseURL:(id)a0;
- (BOOL)handleScrollEventAsSwipeGesture:(id)a0;

@end
