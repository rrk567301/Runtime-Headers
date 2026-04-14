@class NSObject, NSArray, NSString, NSPointerArray, NSTrackingSeparatorToolbarItem, NSWindow;
@protocol NSScrollViewSeparatorTrackingAdapter, NSWindowSectionContentControllerDelegate, NSSplitViewItemSeparatorTrackingAdapter;

@interface NSWindowSectionContentController : NSObject {
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_scrollViewTrackingAdapter;
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_pendingScrollViewTrackingAdapter;
    NSPointerArray *_intersectingScrollViewTrackingAdapters;
    NSObject<NSSplitViewItemSeparatorTrackingAdapter> *_splitViewItemTrackingAdapter;
    NSPointerArray *_intersectingSplitViewItemTrackingAdapters;
    NSTrackingSeparatorToolbarItem *_leadingItem;
    NSTrackingSeparatorToolbarItem *_trailingItem;
    NSString *_groupName;
    long long _accessoryMaterial;
    BOOL _fullHeightDividersDisabled;
    BOOL _fullHeightSidebarDividersDisabled;
    BOOL _splitTrackingAdapterRespondsToIsTrailingSidebar;
    BOOL _alignmentSatisfied;
}

@property long long dividerStyle;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dividerExtentRect;
@property BOOL alignmentSatisfied;
@property double separatorOffset;
@property BOOL splitAdapterCanHostSeparator;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } splitAdapterFrame;
@property BOOL materialShouldBeHidden;
@property unsigned long long seamlessStyle;
@property (weak) NSWindow *window;
@property (weak) NSObject<NSWindowSectionContentControllerDelegate> *delegate;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessoryExtentRect;
@property (readonly) BOOL containsSidebar;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } floatingSidebarInsets;
@property (readonly) BOOL containsTrailingSidebar;
@property (readonly) BOOL allowsFloatingLayout;
@property (readonly) BOOL allowsFullHeightLayout;
@property (retain) NSTrackingSeparatorToolbarItem *leadingItem;
@property (retain) NSTrackingSeparatorToolbarItem *trailingItem;
@property (retain) NSObject<NSScrollViewSeparatorTrackingAdapter> *scrollViewTrackingAdapter;
@property (readonly, copy) NSArray *intersectingScrollViewTrackingAdapters;
@property (retain) NSObject<NSSplitViewItemSeparatorTrackingAdapter> *splitViewItemTrackingAdapter;
@property BOOL fullHeightDividersDisabled;
@property BOOL fullHeightSidebarDividersDisabled;
@property double leadingNeighborSidebarWidth;
@property (copy) NSString *groupName;
@property long long material;
@property (readonly, copy) NSArray *intersectingSplitViewItemTrackingAdapters;

+ (BOOL)automaticallyNotifiesObserversOfLeadingItem;
+ (BOOL)automaticallyNotifiesObserversOfScrollViewTrackingAdapter;
+ (BOOL)automaticallyNotifiesObserversOfSplitViewItemTrackingAdapter;
+ (BOOL)automaticallyNotifiesObserversOfTrailingItem;
+ (id)keyPathsForValuesAffectingAccessoryExtentRect;
+ (id)keyPathsForValuesAffectingDividerStyle;

- (BOOL)hasHeader;
- (id)debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_beginObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_beginObservingSeparatorItem:(id)a0;
- (void)_beginObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (id)_bottomAlignedAccessoryViews;
- (BOOL)_delegatesMagicPocketToScrollView;
- (void)_endObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_endObservingSeparatorItem:(id)a0;
- (void)_endObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (BOOL)_isFullScreenToolbarWindow;
- (BOOL)_sectionIsRemoteViewWithScrollView;
- (void)_syncAccessoryViewState;
- (id)_titlebarAlignedAccessoryViews;
- (void)_updateSectionState;
- (void)_updateSplitViewAccessoryRegistration;
- (void)addIntersectingScrollViewTrackingAdapter:(id)a0;
- (void)addIntersectingSplitViewItemTrackingAdapter:(id)a0;
- (BOOL)hasSeparatorOffset;
- (id)initWithLeadingItem:(id)a0 trailingItem:(id)a1;
- (void)removeIntersectingScrollViewTrackingAdapter:(id)a0;
- (void)removeIntersectingSplitViewItemTrackingAdapter:(id)a0;

@end
