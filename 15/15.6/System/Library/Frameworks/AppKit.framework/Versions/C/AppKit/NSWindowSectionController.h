@class NSTrackingSeparatorToolbarItem, NSArray, NSWindowSectionControllerBoundingDivider, NSMutableArray, NSWindow;

@interface NSWindowSectionController : NSObject {
    NSMutableArray *_contentControllers;
    NSMutableArray *_pendingRegistrationQueue;
    NSMutableArray *_pendingScrollViewRegistrationQueue;
    NSMutableArray *_pendingSplitViewItemRegistrationQueue;
    NSWindowSectionControllerBoundingDivider *_leftItem;
    NSWindowSectionControllerBoundingDivider *_rightItem;
    NSTrackingSeparatorToolbarItem *_systemSidebarItem;
    NSTrackingSeparatorToolbarItem *_customSidebarItem;
    NSTrackingSeparatorToolbarItem *_systemTrailingSidebarItem;
    NSTrackingSeparatorToolbarItem *_customTrailingSidebarItem;
    char _fullHeightDividersDisabled;
    char _fullHeightSidebarDividersDisabled;
    char _updatingRegistrations;
    char _checkingAbandonedContentControllers;
    NSWindow *_window;
}

@property (weak) NSWindow *window;
@property char fullHeightDividersDisabled;
@property char fullHeightSidebarDividersDisabled;
@property (readonly) NSArray *contentControllers;
@property double boundingWidth;

+ (double)leadingPartitionPositionForItem:(id)a0 inWindow:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_addPendingRegistration:(id)a0;
- (void)_addPendingScrollViewRegistration:(id)a0;
- (void)_addPendingSplitViewItemRegistration:(id)a0;
- (char)_attemptToRegisterScrollViewSeparatorTrackingAdapter:(id)a0;
- (char)_attemptToRegisterSeparator:(id)a0;
- (char)_attemptToRegisterSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)_checkForAbandonedContentControllers;
- (char)_doesAdapterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 meetCriteriaForRegistrationWithSectionController:(id)a1 forWindow:(id)a2;
- (char)_doesAdapterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 meetCriteriaForRegistrationWithSectionController:(id)a1 forWindow:(id)a2 strict:(char)a3;
- (void)_insertContentController:(id)a0 atIndex:(long long)a1;
- (char)_isSplitAdapter:(id)a0 restrictedFromRegisteringWith:(id)a1;
- (id)_registeredSeparatorItemEqualToAdapter:(id)a0;
- (void)_removeContentController:(id)a0;
- (void)_removePendingRegistration:(id)a0;
- (void)_removePendingScrollViewRegistration:(id)a0;
- (void)_removePendingSplitViewItemRegistration:(id)a0;
- (void)_unsetAndPendAdaptersForControllerIfNecessary:(id)a0;
- (void)_updatePendingRegistrations;
- (id)_windowForAdapter:(id)a0;
- (void)controller:(id)a0 itemDividerIndexChanged:(id)a1;
- (char)registerScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)registerSeparator:(id)a0;
- (void)registerSidebar:(id)a0;
- (void)registerSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)registerTrailingSidebar:(id)a0;
- (void)unregisterScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)unregisterSeparator:(id)a0;
- (void)unregisterSidebar:(id)a0;
- (void)unregisterSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)unregisterTrailingSidebar:(id)a0;

@end
