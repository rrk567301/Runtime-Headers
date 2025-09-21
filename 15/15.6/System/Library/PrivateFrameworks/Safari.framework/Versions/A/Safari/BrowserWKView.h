@class NSArray, NSString, BrowserViewController, NSMutableSet;
@protocol NSTouchBarProvider, BrowserViewIconLoadingDelegate;

@interface BrowserWKView : SearchableWKView <_WKIconLoadingDelegate> {
    NSMutableSet *_WKViewMouseTrackingBlockerSet;
    char _shouldBlockAllMouseEvents;
}

@property (weak, nonatomic) id<BrowserViewIconLoadingDelegate> iconDelegate;
@property (nonatomic) char shouldBlockAllMouseEvents;
@property (nonatomic) char shouldBlockAllKeyEvents;
@property (nonatomic) char shouldBlockFirstResponder;
@property (readonly, nonatomic) char isVisible;
@property (nonatomic, getter=isForPagePreviews) char forPagePreviews;
@property (readonly, copy, nonatomic) NSArray *previewWKViews;
@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (nonatomic) char didUserInteractWithPage;
@property (nonatomic) char overrideMaintainsInactiveSelectionForVoiceOver;
@property (retain, nonatomic) id<NSTouchBarProvider> alternateFunctionBarProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (char)acceptsFirstResponder;
- (id)accessibilityIdentifier;
- (char)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (char)resignFirstResponder;
- (void)scrollWheel:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)touchBar;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)startObserving:(id)a0;
- (void)stopObserving:(id)a0;
- (void)_updateVisibility;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)_web_didChangeContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)createFullScreenWindow;
- (void)webView:(id)a0 shouldLoadIconWithParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)presentingBrowserViewController;
- (id)_hitTestWindowAtWindowCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (char)_isBlockingWKViewMouseTracking;
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
