@class NSString, NSPanel, NSMenuItem, NSWindow;
@protocol NSDebugTouchBarUIDelegate;

@interface NSDebugMenuTouchBarProvider : NSObject <NSWindowDelegate, NSDebugMenuItemProvider> {
    NSMenuItem *_menuItem;
    NSPanel *_panel;
    NSWindow *_observedWindow;
    char _observingPanelVisibility;
    char _observingKeyWindow;
}

@property (weak) id<NSDebugTouchBarUIDelegate> uiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_sharedPanel;
- (void)switchObservedWindow:(id)a0;
- (void)toggleObservingKeyWindow:(char)a0;
- (void)toggleResponderChainPanel:(id)a0;
- (void)updateTouchBarProviderChain;

@end
