@class NSArray, NSString, BrowserViewController, NSMutableSet;
@protocol NSTouchBarProvider, BrowserViewIconLoadingDelegate;

@interface BrowserWKView : SearchableWKView <_WKIconLoadingDelegate> {
    NSMutableSet *_WKViewMouseTrackingBlockerSet;
    BOOL _shouldBlockAllMouseEvents;
}

@property (weak, nonatomic) id<BrowserViewIconLoadingDelegate> iconDelegate;
@property (nonatomic) BOOL shouldBlockAllMouseEvents;
@property (nonatomic) BOOL shouldBlockAllKeyEvents;
@property (nonatomic) BOOL shouldBlockFirstResponder;
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic, getter=isForPagePreviews) BOOL forPagePreviews;
@property (readonly, copy, nonatomic) NSArray *previewWKViews;
@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (nonatomic) BOOL didUserInteractWithPage;
@property (nonatomic) BOOL overrideMaintainsInactiveSelectionForVoiceOver;
@property (retain, nonatomic) id<NSTouchBarProvider> alternateFunctionBarProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving:(id)a0;
- (id)touchBar;
- (id)accessibilityIdentifier;
- (void)mouseEntered:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)mouseDown:(id)a0;
- (void)viewDidMoveToWindow;
- (void)mouseExited:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)startObserving:(id)a0;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)_updateVisibility;
- (BOOL)acceptsFirstResponder;
- (void)mouseDragged:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)keyUp:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseMoved:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)_setTopContentInset:(double)a0 immediate:(BOOL)a1;
- (void)_web_didChangeContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)createFullScreenWindow;
- (void)webView:(id)a0 shouldLoadIconWithParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)presentingBrowserViewController;
- (id)_hitTestWindowAtWindowCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isBlockingWKViewMouseTracking;
- (void)_updateIgnoresNonWheelEvents;
- (void)blockWKViewMouseTrackingWithObject:(id)a0;
- (id)handleDoJavaScriptCommand:(id)a0;
- (id)initWithBrowserViewController:(id)a0 configuration:(id)a1;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)pageDidClose;
- (id)playbackControlsPresenter;
- (id)safari_owningBrowserViewController;
- (id)sourceProviderForAppleScript;
- (id)tabContentView;
- (id)textProviderForAppleScript;
- (void)unblockWKViewMouseTrackingWithObject:(id)a0;
- (void)updateMouseMoveBlocking;

@end
