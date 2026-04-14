@class NSTrackingSeparatorToolbarItem, NSWindow, NSObject;
@protocol NSScrollViewSeparatorTrackingAdapter, NSWindowSectionContentControllerDelegate, NSSplitViewItemSeparatorTrackingAdapter;

@interface NSWindowSectionContentController : NSObject {
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_scrollViewTrackingAdapter;
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_pendingScrollViewTrackingAdapter;
    NSObject<NSSplitViewItemSeparatorTrackingAdapter> *_splitViewItemTrackingAdapter;
    NSTrackingSeparatorToolbarItem *_leadingItem;
    NSTrackingSeparatorToolbarItem *_trailingItem;
    BOOL _fullHeightDividersDisabled;
    BOOL _fullHeightSidebarDividersDisabled;
    BOOL _splitTrackingAdapterRespondsToIsTrailingSidebar;
}

@property long long dividerStyle;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dividerExtentRect;
@property BOOL alignmentSatisfied;
@property double separatorOffset;
@property BOOL splitAdapterCanHostSeparator;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } splitAdapterFrame;
@property BOOL materialShouldBeHidden;
@property BOOL forceSeamlessAppearanceAndBehaviors;
@property (weak) NSWindow *window;
@property (weak) NSObject<NSWindowSectionContentControllerDelegate> *delegate;
@property (readonly) BOOL containsSidebar;
@property (readonly) BOOL containsTrailingSidebar;
@property (retain) NSTrackingSeparatorToolbarItem *leadingItem;
@property (retain) NSTrackingSeparatorToolbarItem *trailingItem;
@property (retain) NSObject<NSScrollViewSeparatorTrackingAdapter> *scrollViewTrackingAdapter;
@property (readonly) BOOL scrollViewTrackingAdapterIsSeamlessCompatible;
@property (retain) NSObject<NSSplitViewItemSeparatorTrackingAdapter> *splitViewItemTrackingAdapter;
@property BOOL fullHeightDividersDisabled;
@property BOOL fullHeightSidebarDividersDisabled;

+ (BOOL)automaticallyNotifiesObserversOfSplitViewItemTrackingAdapter;
+ (BOOL)automaticallyNotifiesObserversOfScrollViewTrackingAdapter;
+ (BOOL)automaticallyNotifiesObserversOfLeadingItem;
+ (BOOL)automaticallyNotifiesObserversOfTrailingItem;
+ (id)keyPathsForValuesAffectingDividerStyle;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateSectionState;
- (id)initWithLeadingItem:(id)a0 trailingItem:(id)a1;
- (void)_beginObservingSeparatorItem:(id)a0;
- (void)_endObservingSeparatorItem:(id)a0;
- (void)_beginObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_endObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_beginObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)_endObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;

@end
