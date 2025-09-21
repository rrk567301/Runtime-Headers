@class NSArray, NSMapTable, NSMutableArray, NSObject;
@protocol NSBarLayoutWrapper, NSBarLayoutDelegate;

@interface NSBarLayout : NSObject {
    NSArray *_items;
    NSMutableArray *_contentItems;
    NSMutableArray *_accessoryItems;
    NSObject<NSBarLayoutWrapper> *_collapsedItem;
    NSObject<NSBarLayoutWrapper> *_overlayItem;
    NSObject<NSBarLayoutWrapper> *_clipIndicator;
    NSObject<NSBarLayoutWrapper> *_searchItem;
    NSMapTable *_itemsToAttributes;
    char _layoutItemsNeedsUpdate;
}

@property (weak) NSObject<NSBarLayoutDelegate> *delegate;
@property (copy) NSArray *items;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;
@property double defaultItemPadding;
@property char enforcesUniformHeight;
@property (getter=isCenterPrincipal) char centerIsPrincipal;
@property long long accessoryUserInterfaceLayoutDirection;
@property long long itemUserInterfaceLayoutDirection;
@property double standardCenterWidth;
@property char allowsSingleItemClipping;
@property char centerRequiresTrueCenterLayout;
@property char overlayRequiresTrueCenterLayout;
@property char overflowPreventsReflow;
@property char overflowRequired;
@property (readonly) struct CGSize { double x0; double x1; } minimumContentSize;
@property (readonly) struct CGSize { double x0; double x1; } maximumContentSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)_adjustedHeightForItem:(id)a0 availableHeight:(double)a1;
- (double)_aggregateWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2 widthMeasurement:(id /* block */)a3;
- (void)_assembleAccessoryItems;
- (void)_assembleContentItems;
- (void)_calculateLayoutOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sharesLeadingEdge:(char)a2 sharesTrailingEdge:(char)a3;
- (void)_calculateMinimumLayoutOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerRectGivenItems:(id)a0 leadingItems:(id)a1 trailingItems:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (double)_compressedMinWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2;
- (double)_contentClippingWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2;
- (void)_enumerateSectionsOfItems:(id)a0 usingBlock:(id /* block */)a1;
- (char)_isOverflowRequiredForItems:(id)a0 availableWidth:(double)a1 sharesLeadingEdge:(char)a2 sharesTrailingEdge:(char)a3;
- (void)_layoutSectionOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 requiresTrueCenterLayout:(char)a2;
- (double)_leadingInsetOfItems:(id)a0 sharesLeadingEdge:(char)a1;
- (double)_maxWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2 containsFlexibleSpaceItems:(char *)a3;
- (double)_maxWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2 containsFlexibleSpaceItems:(char *)a3 constrainsSearchItems:(char)a4;
- (double)_minWidthOfItems:(id)a0 sharesLeadingEdge:(char)a1 sharesTrailingEdge:(char)a2;
- (id)_orderedItemsGivenUnorderedArray:(id)a0 usingOrderedArray:(id)a1;
- (id)_overflowMenuParticipatingItems:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_principleRectGivenItems:(id)a0 remainingLeadingWidth:(double)a1 remainingTrailingWidth:(double)a2 totalWidth:(double)a3 sharesLeadingEdge:(char)a4 sharesTrailingEdge:(char)a5 requiresTrueCenterLayout:(char)a6;
- (id)_prioritizedAndGroupedItems:(id)a0;
- (id)_prioritizedItems:(id)a0;
- (void)_touchUpSpacesInItems:(id)a0;
- (double)_trailingInsetOfItems:(id)a0 sharesTrailingEdge:(char)a1;
- (void)_updateAttributesOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_visibleCenterItemsInVisibleItems:(id)a0 centerItems:(id)a1;
- (id)_visibleItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_visualCenterForItems:(id)a0;
- (void)invalidateItemPositions;
- (id)layoutAttributesOfVisibleItems;
- (id)visibleItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
