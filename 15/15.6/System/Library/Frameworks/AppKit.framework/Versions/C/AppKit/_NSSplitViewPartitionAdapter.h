@class NSString, NSSplitView, NSObject;

@interface _NSSplitViewPartitionAdapter : NSObject <NSSidebarTrackingAdapter> {
    NSSplitView *_splitView;
    long long _dividerIndex;
    double _dividerPosition;
    char _inManualResize;
    double _cachedOriginX;
    double _minimumThickness;
}

@property (retain, nonatomic) NSSplitView *splitView;
@property (nonatomic) long long splitViewDividerIndex;
@property (nonatomic) char sidebarIsTrailingDivider;
@property (readonly) double sidebarDividerPosition;
@property (readonly) double minimumDividerPosition;
@property (readonly) double maximumDividerPosition;
@property (readonly) char isCollapsed;
@property (readonly, getter=isOverlaidAsSidebar) char overlaidAsSidebar;
@property (readonly) double logicalDividerPosition;
@property (readonly) long long depthOfView;
@property (readonly) NSObject *representedView;
@property (readonly) char isValidConfiguration;
@property (readonly) double dividerWidth;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dividerCursorRect;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } sidebarAdditionalSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingLogicalDividerPosition;
+ (id)keyPathsForValuesAffectingSidebarDividerPosition;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void)_invalidateCollapsed;
- (void)_invalidateDividerPosition;
- (char)_isDividerPositionValid;
- (char)_isInspector;
- (char)_isSidebar;
- (double)_realMinimumThicknessOfItem:(id)a0;
- (void)_setListenToSplitViewGeometryInWindowDidChange:(char)a0;
- (id)_sidebar;
- (void)_splitViewDidExpandOrCollapse:(id)a0;
- (void)_splitViewDidResize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_splitViewDividerFrame;
- (id)_trackedArrangedView;
- (void)setDividerPosition:(double)a0;
- (void)splitViewGeometryInWindowDidChange:(id)a0;
- (void)toggleSidebar:(id)a0;
- (char)validateToolbarItem:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;

@end
