@class NSView;

@interface WKWindowVisibilityObserver : NSObject {
    NSView *_view;
    void *_impl;
    BOOL _didRegisterForLookupPopoverCloseNotifications;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_windowDidBecomeKey:(id)a0;
- (void)_windowDidMove:(id)a0;
- (void)_windowDidOrderOnScreen:(id)a0;
- (void)_windowDidResize:(id)a0;
- (void)startObserving:(id)a0;
- (void)_windowDidOrderOffScreen:(id)a0;
- (void)_windowDidChangeBackingProperties:(id)a0;
- (void)_windowDidChangeScreen:(id)a0;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)stopObserving:(id)a0;
- (void)_activeSpaceDidChange:(id)a0;
- (void)_windowDidResignKey:(id)a0;
- (void)_windowDidMiniaturize:(id)a0;
- (void)_windowDidDeminiaturize:(id)a0;
- (void)_windowDidChangeLayerHosting:(id)a0;
- (void)_screenDidChangeColorSpace:(id)a0;
- (id)initWithView:(id)a0 impl:(void *)a1;
- (void)startObservingFontPanel;
- (void)startObservingLookupDismissalIfNeeded;

@end
