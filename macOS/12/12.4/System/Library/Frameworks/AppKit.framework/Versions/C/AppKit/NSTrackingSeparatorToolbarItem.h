@class NSSplitView, NSSeparatorToolbarItemView;

@interface NSTrackingSeparatorToolbarItem : NSToolbarItem {
    NSSeparatorToolbarItemView *_view;
    BOOL _isAlignmentSatisfied;
    BOOL _alignmentIsAlwaysSatisfied;
    BOOL _fullHeightDividersDisabled;
    BOOL _alignmentNeedsUpdate;
    BOOL _alignmentRequired;
}

@property (readonly, getter=isAlignmentSatisfied) BOOL alignmentSatisfied;
@property BOOL alignmentIsAlwaysSatisfied;
@property BOOL fullHeightDividersDisabled;
@property (readonly) double dividerWidth;
@property BOOL representsSidebar;
@property BOOL representsTrailingSidebar;
@property (retain) NSSplitView *splitView;
@property long long dividerIndex;

+ (id)trackingSeparatorToolbarItemWithIdentifier:(id)a0 splitView:(id)a1 dividerIndex:(long long)a2;
+ (BOOL)automaticallyNotifiesObserversOfAlignmentSatisfied;

- (void)dealloc;
- (id)debugDescription;
- (id)view;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)setAlignmentSatisfied:(BOOL)a0;
- (id)initWithItemIdentifier:(id)a0;
- (void)_noteAlignmentValueNeedsUpdate;
- (void)_setPartitionAdapter:(id)a0;
- (double)_preferredTrailingPosition;
- (void)_updateAlignmentValue;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (BOOL)isCollapsed;
- (BOOL)_isPartitionItem;
- (void)setNavigational:(BOOL)a0;
- (BOOL)isNavigational;
- (long long)visibilityPriority;
- (BOOL)isAlignmentRequired;
- (void)setAlignmentRequired:(BOOL)a0;
- (double)_partitionPosition;
- (id)_menuFormRepresentationForOverflowMenu;
- (BOOL)isSeparator;
- (BOOL)participatesInOverflow;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsHiddenLabelInDisplayMode:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;

@end
