@class NSView, NSString, NSArray, NSValue, NSMutableDictionary, _NSSplitViewSpringLoadingView, _NSSplitViewPartitionAdapter, NSMutableArray, _NSSplitViewShadowView, NSMapTable;

@interface NSSplitViewVariables : NSObject {
    BOOL isVertical;
    long long dividerStyle;
    NSString *autosaveName;
    NSValue *delegateValue;
    BOOL isPaneSplitter;
    NSMutableArray *lastAdjustmentArrangedViewFrames;
    double lastAdjustmentDividerThickness;
    BOOL lastAdjustDividerOrientation;
    NSMutableArray *originalArrangedViewProportionsDuringResizing;
    NSMutableArray *arrangedViewIsResizable;
    NSArray *stackConstraints;
    NSArray *preferredSizeConstraints;
    NSArray *fallbackSizeConstraints;
    NSMutableDictionary *holdingPrioritiesByViewIndex;
    NSMapTable *preferredArrangedSubviewThicknesses;
    NSMutableArray *arrangedSubviews;
    NSView *leadingOverlayView;
    NSView *trailingOverlayView;
    NSView *liveResizeAutoUncollapsedLeadingOverlayView;
    NSView *liveResizeAutoUncollapsedTrailingOverlayView;
    _NSSplitViewShadowView *leadingOverlayShadowView;
    _NSSplitViewShadowView *trailingOverlayShadowView;
    NSView *_transientDraggingOperationUncollapsedView;
    NSMutableArray *autocollapsedViews;
    NSMutableArray *dividerViews;
    double minimumSizeForInlineSidebars;
    long long _registeredTransientBehavior;
    NSMutableArray *dividersNeedingResizeNotifications;
    _NSSplitViewSpringLoadingView *leadingSpringLoadingView;
    _NSSplitViewSpringLoadingView *trailingSpringLoadingView;
    unsigned long long willResizeDelegateNotificationToken;
    unsigned long long didResizeDelegateNotificationToken;
    _NSSplitViewPartitionAdapter *_trailingSidebarAdapter;
    struct { unsigned char resizeSubviewsWithOldSizeIsBeingInvokedByViewWillDraw : 1; unsigned char resizeSubviewsWithOldSizeInvokedDelegate : 1; unsigned char warnedAboutInvalidArrangedViewFrames : 1; unsigned char warnedAboutInvalidArrangedViewOrder : 1; unsigned char delegateCursorOfDividerAtIndex : 1; unsigned char unarchiving : 1; unsigned char delayArrangedViewAdjustment : 1; unsigned char autosaveDelayed : 1; unsigned char shouldDelayAutosave : 1; unsigned char firstLogicalDividerIsHidden : 1; unsigned char lastLogicalDividerIsHidden : 1; unsigned char dividerColorSet : 1; unsigned char performingConstraintBasedPresentDividerDragResult : 1; unsigned char alwaysUseAlignmentRects : 1; unsigned char integralizeInUserSpace : 1; unsigned char splitViewControllerAllowsPropertyChange : 1; unsigned char splitViewOwnedBySplitViewController : 1; unsigned char doesNotArrangeAllSubviews : 1; unsigned char testingForOverlays : 1; unsigned char isSpringLoaded : 1; unsigned char showsOverlayMetrics : 1; unsigned char draggingDivider : 1; unsigned char finishedFirstUpdateConstraintsPass : 1; unsigned char animatesAutocollapses : 1; unsigned char currentlySpringLoading : 1; unsigned char explicitAutocollapseThicknessDisabled : 1; unsigned char needsSidebarProviderUpdate : 1; unsigned char hasProvidedSidebarToWindow : 1; unsigned char hasProvidedTrailingSidebarToWindow : 1; unsigned char unused : 6; } svFlags;
}

- (void).cxx_destruct;

@end
