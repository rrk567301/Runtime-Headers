@class NSString, NSSplitView, NSObject;

@interface _NSSplitViewPartitionAdapter : NSObject <NSSidebarTrackingAdapter> {
    NSSplitView *_splitView;
    long long _dividerIndex;
    double _dividerPosition;
    BOOL _inManualResize;
    double _cachedOriginX;
}

@property (retain, nonatomic) NSSplitView *splitView;
@property (nonatomic) long long splitViewDividerIndex;
@property (nonatomic) BOOL sidebarIsTrailingDivider;
@property (readonly) double sidebarDividerPosition;
@property (readonly) double minimumDividerPosition;
@property (readonly) double maximumDividerPosition;
@property (readonly) BOOL isCollapsed;
@property (readonly, getter=isOverlaidAsSidebar) BOOL overlaidAsSidebar;
@property (readonly) long long depthOfView;
@property (readonly) NSObject *representedView;
@property (readonly) double dividerWidth;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dividerCursorRect;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } sidebarAdditionalSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setDividerPosition:(double)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)toggleSidebar:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (id)_sidebar;
- (void)_splitViewDidResize:(id)a0;
- (void)splitViewGeometryInWindowDidChange:(id)a0;
- (void)_invalidateDividerPosition;
- (BOOL)_isDividerPositionValid;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_splitViewDividerFrame;
- (void)_setListenToSplitViewGeometryInWindowDidChange:(BOOL)a0;

@end
