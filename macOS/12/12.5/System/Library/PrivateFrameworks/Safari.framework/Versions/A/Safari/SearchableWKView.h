@class WebViewController, NSString, BrowserViewController, WKWebsiteDataStore, _WKRemoteObjectRegistry, NSColor;
@protocol SearchableWKViewCancelDelegate, SearchableWKViewFullScreenDelegate, SearchableWKViewPlaybackControlsPresenter;

@interface SearchableWKView : WKWebView <_WKFullscreenDelegate> {
    BOOL _isInFullscreenMode;
}

@property (weak, nonatomic) id<SearchableWKViewFullScreenDelegate> fullScreenDelegate;
@property (weak, nonatomic) id<SearchableWKViewPlaybackControlsPresenter> playbackControlsPresenter;
@property (weak, nonatomic) id<SearchableWKViewCancelDelegate> cancelDelegate;
@property (readonly, nonatomic) unsigned long long browsingMode;
@property (readonly, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (readonly, nonatomic) BrowserViewController *presentingBrowserViewController;
@property (readonly, weak, nonatomic) WebViewController *webViewController;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *remoteObjectRegistry;
@property (nonatomic) BOOL drawsTransparentBackground;
@property (copy, nonatomic) NSColor *underlayColor;
@property (readonly) struct OpaqueWKPage { } *pageRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)keyDown:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)cancelOperation:(id)a0;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)fullScreenPlaceholderView;
- (id)_immediateActionAnimationControllerForHitTestResult:(id)a0 withType:(long long)a1 userData:(id)a2;
- (void)_dismissContentRelativeChildWindows;
- (void)_gestureEventWasNotHandledByWebCore:(id)a0;
- (void)_addMediaPlaybackControlsView:(id)a0;
- (void)_removeMediaPlaybackControlsView;
- (void)saveBackForwardSnapshotForItem:(struct OpaqueWKBackForwardListItem { } *)a0;
- (void)disableFrameSizeUpdates;
- (void)enableFrameSizeUpdates;
- (id)createFullScreenWindow;
- (void)beginDeferringViewInWindowChanges;
- (void)endDeferringViewInWindowChanges;
- (void)endDeferringViewInWindowChangesSync;
- (void)_webViewWillEnterFullscreen:(id)a0;
- (void)_webViewDidEnterFullscreen:(id)a0;
- (void)_webViewDidExitFullscreen:(id)a0;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)pageDidClose;
- (id)_browserWindow;

@end
