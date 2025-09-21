@class NSObject, NSString, NSTrackingSeparatorToolbarItem, NSWindow;
@protocol NSScrollViewSeparatorTrackingAdapter, NSWindowSectionContentControllerDelegate, NSSplitViewItemSeparatorTrackingAdapter;

@interface NSWindowSectionContentController : NSObject {
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_scrollViewTrackingAdapter;
    NSObject<NSScrollViewSeparatorTrackingAdapter> *_pendingScrollViewTrackingAdapter;
    NSObject<NSSplitViewItemSeparatorTrackingAdapter> *_splitViewItemTrackingAdapter;
    NSTrackingSeparatorToolbarItem *_leadingItem;
    NSTrackingSeparatorToolbarItem *_trailingItem;
    NSString *_groupName;
    long long _accessoryMaterial;
    char _fullHeightDividersDisabled;
    char _fullHeightSidebarDividersDisabled;
    char _splitTrackingAdapterRespondsToIsTrailingSidebar;
    char _alignmentSatisfied;
}

@property long long dividerStyle;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dividerExtentRect;
@property char alignmentSatisfied;
@property double separatorOffset;
@property char splitAdapterCanHostSeparator;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } splitAdapterFrame;
@property char materialShouldBeHidden;
@property unsigned long long seamlessStyle;
@property (weak) NSWindow *window;
@property (weak) NSObject<NSWindowSectionContentControllerDelegate> *delegate;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessoryExtentRect;
@property (readonly) char containsSidebar;
@property (readonly) char containsTrailingSidebar;
@property (retain) NSTrackingSeparatorToolbarItem *leadingItem;
@property (retain) NSTrackingSeparatorToolbarItem *trailingItem;
@property (retain) NSObject<NSScrollViewSeparatorTrackingAdapter> *scrollViewTrackingAdapter;
@property (retain) NSObject<NSSplitViewItemSeparatorTrackingAdapter> *splitViewItemTrackingAdapter;
@property char fullHeightDividersDisabled;
@property char fullHeightSidebarDividersDisabled;
@property (copy) NSString *groupName;
@property long long material;

+ (char)automaticallyNotifiesObserversOfLeadingItem;
+ (char)automaticallyNotifiesObserversOfScrollViewTrackingAdapter;
+ (char)automaticallyNotifiesObserversOfSplitViewItemTrackingAdapter;
+ (char)automaticallyNotifiesObserversOfTrailingItem;
+ (id)keyPathsForValuesAffectingAccessoryExtentRect;
+ (id)keyPathsForValuesAffectingDividerStyle;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_accessoryView;
- (void)_beginObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_beginObservingSeparatorItem:(id)a0;
- (void)_beginObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)_endObservingScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)_endObservingSeparatorItem:(id)a0;
- (void)_endObservingSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)_syncAccessoryViewState;
- (void)_updateSectionState;
- (id)initWithLeadingItem:(id)a0 trailingItem:(id)a1;

@end
