@class SCRApplication;

@interface SCRDockApplication : SCRSystemApplication {
    struct __AXObserver { } *_appObserver;
}

@property (retain, nonatomic, setter=_setApplicationBeforeShowingExpose:) SCRApplication *_applicationBeforeShowingExpose;
@property (nonatomic, setter=_setIsShowingDesktop:) BOOL _isShowingDesktop;
@property (nonatomic) BOOL isTabDockActive;

- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (void)setIsKeyboardEventHandler:(BOOL)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (id)openedMenu;
- (void)_removeElement:(id)a0;
- (BOOL)isDockApplication;
- (void)dispatchFocusOnDockAndSelectDockItem:(id)a0;
- (BOOL)applicationNeedsWindows;
- (void)dispatchFocusOutDock;
- (void)_initializeObserver;
- (void)_exposeDidHide:(id)a0;
- (void)_exposeDidShow:(id)a0;
- (void)_desktopDidShow:(id)a0;
- (void)_launchpadDidShow:(id)a0;
- (void)_launchpadDidHide:(id)a0;
- (void)_launchpadPageDidChange:(id)a0;
- (void)_flyToDownloadsAnimationOccurred:(id)a0;
- (void)_focusOutDesktop;
- (void)_focusOutExpose;
- (void)_handleSelectionChange:(id)a0;
- (void)_focusOnExpose;
- (void)_focusOnDesktop;
- (void)_focusOutLaunchpad;
- (void)_focusOnLaunchpad;
- (void)_focusOnDock:(id)a0;
- (void)_focusOnDockElement:(id)a0;
- (void)_focusOutDock;
- (id)_dockMenuUIElement;
- (void)_uiElementWasDestroyed:(id)a0;
- (void)dispatchFocusOnDock;
- (void)dispatchFocusOnDockAndSelectDockItemAtIndex:(unsigned long long)a0;
- (void)_handleNotification:(id)a0 withAXElement:(id)a1;

@end
