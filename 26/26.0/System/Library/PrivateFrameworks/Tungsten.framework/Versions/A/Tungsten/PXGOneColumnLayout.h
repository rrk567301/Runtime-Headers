@interface PXGOneColumnLayout : PXGItemsLayout <PXGItemsGeometry> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdating;
    BOOL _didAlreadyUpdateLoadedItems;
}

@property (nonatomic) long long anchorItem;
@property (nonatomic) struct CGPoint { double x; double y; } anchorItemCenter;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) unsigned char presentationType;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) BOOL enablePerItemCornerRadius;
@property (nonatomic) double overrideAspectRatio;
@property (nonatomic) double overrideAspectRatioAmount;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (nonatomic) BOOL fillSafeAreaBottomInset;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;

- (id)diagnosticDescription;
- (id)init;
- (id)description;
- (void)update;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(long long)a0;
- (BOOL)allowsDanglingUpdatesAssertions;
- (void)_updateSprites;
- (void)_updateVisibleRect;
- (void)alphaDidChange;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (BOOL)canHandleVisibleRectRejection;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (void)invalidateLoadedItems;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (id)itemsGeometry;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (void)loadedItemsDidChange;
- (void)referenceSizeDidChange;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)visibleRectDidChange;
- (long long)itemClosestTo:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_itemsToLoadForAnchorItem:(long long)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateSpriteStyles;

@end
