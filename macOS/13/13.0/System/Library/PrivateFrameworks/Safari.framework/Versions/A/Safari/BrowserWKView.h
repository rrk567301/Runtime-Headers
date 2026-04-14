@class NSUUID, NSArray, BrowserViewController, NSString, NSMutableSet;
@protocol NSTouchBarProvider, BrowserViewIconLoadingDelegate;

@interface BrowserWKView : SearchableWKView <_WKIconLoadingDelegate> {
    NSMutableSet *_WKViewMouseTrackingBlockerSet;
    BOOL _shouldBlockAllMouseEvents;
}

@property (weak, nonatomic) id<BrowserViewIconLoadingDelegate> iconDelegate;
@property (nonatomic) BOOL shouldBlockAllMouseEvents;
@property (nonatomic) BOOL shouldBlockAllKeyEvents;
@property (nonatomic) BOOL shouldBlockFirstResponder;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic, getter=isForPagePreviews) BOOL forPagePreviews;
@property (readonly, copy, nonatomic) NSArray *previewWKViews;
@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (nonatomic) BOOL hadPotentiallyCompromisingInteraction;
@property (nonatomic) BOOL overrideMaintainsInactiveSelectionForVoiceOver;
@property (retain, nonatomic) id<NSTouchBarProvider> alternateFunctionBarProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)touchBar;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (id)accessibilityIdentifier;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)keyUp:(id)a0;
- (void)startObserving:(id)a0;
- (void)stopObserving:(id)a0;
- (void)_updateVisibility;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)_web_didChangeContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)createFullScreenWindow;
- (void)webView:(id)a0 shouldLoadIconWithParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)tabContentView;
- (id)handleDoJavaScriptCommand:(id)a0;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)pageDidClose;
- (id)initWithBrowserViewController:(id)a0 configuration:(id)a1;
- (id)playbackControlsPresenter;
- (void)updateMouseMoveBlocking;
- (void)blockWKViewMouseTrackingWithObject:(id)a0;
- (void)unblockWKViewMouseTrackingWithObject:(id)a0;
- (id)_hitTestWindowAtWindowCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id)sourceProviderForAppleScript;
- (id)textProviderForAppleScript;
- (id)presentingBrowserViewController;
- (BOOL)_isBlockingWKViewMouseTracking;

@end
