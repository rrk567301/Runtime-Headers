@class SCRApplication;

@interface SCRDockApplication : SCRSystemApplication {
    struct __AXObserver { } *_appObserver;
}

@property (retain, nonatomic, setter=_setApplicationBeforeShowingExpose:) SCRApplication *_applicationBeforeShowingExpose;
@property (nonatomic, setter=_setIsShowingDesktop:) BOOL _isShowingDesktop;
@property (nonatomic) BOOL isTabDockActive;
@property (nonatomic) long long lastFocusedLaunchpadGridIndex;
@property (nonatomic) unsigned long long currentExposeType;

- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_elementWasCreated:(id)a0;
- (void)focusOut;
- (void)_removeElement:(id)a0;
- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (void)setIsKeyboardEventHandler:(BOOL)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)applicationNeedsWindows;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)_exposeDidHide:(id)a0;
- (void)_exposeDidShow:(id)a0;
- (void)_desktopDidShow:(id)a0;
- (void)_launchpadDidShow:(id)a0;
- (void)_launchpadDidHide:(id)a0;
- (void)_launchpadPageDidChange:(id)a0;
- (void)_flyToDownloadsAnimationOccurred:(id)a0;
- (void)_handleSelectionChange:(id)a0;
- (void)_focusOnDock:(id)a0;
- (void)_focusOnDockElement:(id)a0;
- (void)_focusOutDock;
- (id)_dockMenuUIElement;
- (void)_initializeObserver;
- (BOOL)isDockApplication;
- (void)dispatchFocusOnDock;
- (void)dispatchFocusOnDockAndSelectDockItemAtIndex:(unsigned long long)a0;
- (void)dispatchFocusOnDockAndSelectDockItem:(id)a0;
- (void)dispatchFocusOutDock;
- (id)openedMenu;
- (void)_focusOnExpose;
- (void)_focusOutExpose;
- (void)_focusOnDesktop;
- (void)_focusOutDesktop;
- (id)_launchpadFocusedPopoverForContainer:(id)a0;
- (void)_focusOnLaunchpadWithRequest:(id)a0;
- (void)_focusOutLaunchpad;
- (void)_uiElementWasDestroyed:(id)a0;
- (void)_handleNotification:(id)a0 withAXElement:(id)a1;

@end
