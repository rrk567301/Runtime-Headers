@class NSView, LibrarySidebarNavigationViewController, NSString, SidebarViewController, SafariSidebarSplitViewItem, NSColor, NSVisualEffectView, NSSplitViewItem, BrowserWindowController;
@protocol BrowserWindowContentSplitViewControllerDelegate;

@interface BrowserWindowContentSplitViewController : NSSplitViewController <LibrarySidebarNavigationViewControllerDelegate, NSSplitViewDelegate, SidebarStateRestorationContext> {
    BrowserWindowController *_browserWindowController;
    SafariSidebarSplitViewItem *_sidebarSplitViewItem;
    NSSplitViewItem *_tabSwitcherSplitViewItem;
    NSView *_tabViewControllerView;
    NSView *_webContentSnapshotForSidebarAnimation;
    NSView *_webInspectorSnapshotForSidebarAnimation;
    struct SidebarAnimationContext { unsigned long long tabViewAutoresizingMask; int revealingOrCoveringSidebar; BOOL sidebarAnimationInProgress; BOOL layoutAnalysisClaimsPageIsCentered; BOOL sidebarWillAppearAsOverlay; } _sidebarAnimationContext;
    NSVisualEffectView *_visualEffectViewForHidingSeparator;
    unsigned long long _fakeSidebarTransitionDepth;
    id /* block */ _sidebarCompletionHandler;
}

@property (nonatomic) BOOL overlayingSidebar;
@property (retain, nonatomic) SidebarViewController *sidebarViewController;
@property (retain, nonatomic) LibrarySidebarNavigationViewController *librarySidebarNavigationViewController;
@property (readonly, nonatomic) NSView *sidebarClipView;
@property (readonly, nonatomic) BOOL sidebarAppearsAsOverlay;
@property (readonly, nonatomic) BOOL isSidebarAnimationInProgress;
@property (readonly, nonatomic) BOOL isHidingSidebar;
@property (readonly, nonatomic) BOOL isOverlayingSidebar;
@property (weak, nonatomic) id<BrowserWindowContentSplitViewControllerDelegate> delegate;
@property (retain, nonatomic) NSColor *separatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastDisplayedSidebarBookmarkListUUID;

- (void).cxx_destruct;
- (void)splitViewItem:(id)a0 willChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (void)splitViewItem:(id)a0 isChangingCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (void)splitViewItem:(id)a0 didChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (BOOL)_splitView:(id)a0 canLiveCollapseArrangedSubview:(id)a1;
- (void)_updateConstraints;
- (void)librarySidebarNavigationViewControllerNavigateToSharedWithYou:(id)a0;
- (BOOL)librarySidebarNavigationViewControllerIsShowingSharedWithYou:(id)a0;
- (void)didCollectPageLayoutInformationForSidebarAnimationBeforeResize;
- (void)didForceContentRepaintAndCollectPageLayoutInformationForSidebarAnimationAfterResize:(id)a0;
- (id)initWithBrowserWindowController:(id)a0;
- (void)_loadSidebarSplitViewItemIfNeeded;
- (void)_loadTabSwitcherSplitViewItemWithTabViewController:(id)a0;
- (id)_currentSidebarViewController;
- (void)_installSidebarViewController;
- (BOOL)_uncachedSidebarAppearsAsOverlay;
- (BOOL)_canPerformLiveResizeForSidebarAnimation;
- (void)_prepareForSidebarAnimationWithWebContent;
- (void)_showSidebarWithAnimation:(BOOL)a0;
- (void)_hideSidebarWithAnimation:(BOOL)a0;
- (BOOL)_isShowingOverlaySidebar;
- (double)sidebarWidth;
- (id)_browserViewForPageLayoutInformation;
- (void)_browserViewDidResizeForSidebarAnimation:(id)a0;
- (BOOL)_isPageCenteredGivenLayoutInformation:(id)a0;
- (void)_applySplitViewItemHeight:(id)a0;
- (void)_prepareForFadeOutAnimationWithSnapshot:(const void *)a0;
- (id)_performanceOperationName;
- (double)_currentSidebarViewControllerSavedSidebarWidth;
- (void)_cleanUpAfterHidingSidebar;
- (void)showSidebarWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideSidebarWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideOverlaySidebarIfNeeded;

@end
