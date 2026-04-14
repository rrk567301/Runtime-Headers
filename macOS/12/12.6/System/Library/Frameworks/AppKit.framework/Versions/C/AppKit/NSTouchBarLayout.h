@interface NSTouchBarLayout : NSObject {
    double _leadingWidgetWidth;
}

@property double visualCenterX;
@property double defaultItemPadding;
@property BOOL enforcesUniformHeight;
@property (getter=isCenterPrincipal) BOOL centerIsPrincipal;
@property long long accessoryUserInterfaceLayoutDirection;
@property long long itemUserInterfaceLayoutDirection;
@property double standardCenterWidth;
@property double leadingWidgetWidth;
@property BOOL allowsSingleItemClipping;
@property BOOL centerRequiresTrueCenterLayout;
@property BOOL overlayRequiresTrueCenterLayout;
@property BOOL overflowPreventsReflow;
@property BOOL overflowRequired;

+ (id)touchBarLayoutWithVisualCenterX:(double)a0;
+ (id)toolbarLayoutWithVisualCenterX:(double)a0;

- (id)init;
- (id)initWithVisualCenterX:(double)a0;
- (double)_minWidthOfItems:(id)a0 sharesLeftEdge:(BOOL)a1 sharesRightEdge:(BOOL)a2;
- (BOOL)_isOverflowRequiredForItems:(id)a0 availableWidth:(double)a1 sharesLeftEdge:(BOOL)a2 sharesRightEdge:(BOOL)a3;
- (id)_attributesOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2 sharesLeftEdge:(BOOL)a3 sharesRightEdge:(BOOL)a4 xOrigin:(double)a5;
- (void)_calculateMinimumLayoutOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2 originX:(double)a3 itemsToFrames:(id)a4;
- (id)_calculateLayoutOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2 originX:(double)a3 requiresTrueCenterLayout:(BOOL)a4;
- (void)_adjustForItemUserInterfaceLayoutDirection:(long long)a0 items:(id)a1 itemsToAttributes:(id)a2 availableWidth:(double)a3 xOrigin:(double)a4;
- (void)_touchUpSpacesInItems:(id)a0 itemsToAttributes:(id)a1;
- (id)_prioritizedAndGroupedItems:(id)a0;
- (double)_compressedMinWidthOfItems:(id)a0 sharesLeftEdge:(BOOL)a1 sharesRightEdge:(BOOL)a2;
- (id)_orderedItemsGivenUnorderedArray:(id)a0 usingOrderedArray:(id)a1;
- (id)_calculateMinimumLayoutOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2 originX:(double)a3;
- (double)_adjustedHeightForItem:(id)a0 availableHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerRectGivenItems:(id)a0 remainingLeftWidth:(double)a1 remainingRightWidth:(double)a2 totalWidth:(double)a3 sharesLeftEdge:(BOOL)a4 sharesRightEdge:(BOOL)a5 requiresTrueCenterLayout:(BOOL)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerRectGivenItems:(id)a0 leftItems:(id)a1 rightItems:(id)a2 totalWidth:(double)a3 xOrigin:(double)a4;
- (void)_calculateLayoutOfItems:(id)a0 withAvailableSize:(struct CGSize { double x0; double x1; })a1 startingWidth:(double)a2 xOrigin:(double)a3 sharesLeftEdge:(BOOL)a4 sharesRightEdge:(BOOL)a5 accountsForWidgetSpace:(BOOL)a6 itemsToFrames:(id)a7;
- (void)_divideAndCalculateLayoutOfItems:(id)a0 withAvailableSize:(struct CGSize { double x0; double x1; })a1 startingWidth:(double)a2 xOrigin:(double)a3 sharesLeftEdge:(BOOL)a4 sharesRightEdge:(BOOL)a5 accountsForWidgetSpace:(BOOL)a6 itemsToFrames:(id)a7;
- (double)_maxWidthOfItems:(id)a0 sharesLeftEdge:(BOOL)a1 sharesRightEdge:(BOOL)a2 containsFlexibleSpaceItems:(BOOL *)a3;
- (double)_contentClippingWidthOfItems:(id)a0 sharesLeftEdge:(BOOL)a1 sharesRightEdge:(BOOL)a2;
- (double)_leftInsetOfItems:(id)a0 sharesLeftEdge:(BOOL)a1;
- (double)_rightInsetOfItems:(id)a0 sharesRightEdge:(BOOL)a1;
- (id)_prioritizedItems:(id)a0;
- (double)_aggregateWidthOfItems:(id)a0 sharesLeftEdge:(BOOL)a1 sharesRightEdge:(BOOL)a2 widthMeasurement:(id /* block */)a3;
- (id)attributesOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2;
- (void)items:(id)a0 centerItems:(id)a1 minSize:(struct CGSize { double x0; double x1; } *)a2 maxSize:(struct CGSize { double x0; double x1; } *)a3;
- (id)_overflowMenuParticipatingItems:(id)a0;

@end
