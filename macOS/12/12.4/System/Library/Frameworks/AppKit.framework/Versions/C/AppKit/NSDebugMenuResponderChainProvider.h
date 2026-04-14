@class NSString, NSPanel, NSMenuItem, NSWindow;
@protocol NSDebugResponderChainUIDelegate;

@interface NSDebugMenuResponderChainProvider : NSObject <NSWindowDelegate, NSDebugMenuItemProvider> {
    NSMenuItem *_menuItem;
    NSPanel *_panel;
    NSWindow *_observedWindow;
    BOOL _observingPanelVisibility;
    BOOL _observingKeyWindow;
}

@property (weak) id<NSDebugResponderChainUIDelegate> uiDelegate;
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
- (void)toggleResponderChainPanel:(id)a0;
- (void)updateForCFMZ:(id)a0;
- (void)toggleObservingKeyWindow:(BOOL)a0;
- (void)updateResponderChainFromWindow:(id)a0;

@end
