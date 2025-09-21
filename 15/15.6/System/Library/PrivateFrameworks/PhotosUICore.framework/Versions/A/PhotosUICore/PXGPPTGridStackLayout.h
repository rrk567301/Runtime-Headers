@class NSString, NSColor, NSIndexSet;

@interface PXGPPTGridStackLayout : PXGStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource> {
    long long _numberOfItemsPerSection;
    long long _numberOfColumns;
    char _useAssetBadgeDecoration;
    long long _selectionDecorationStyle;
    char _decorated;
    long long _estimatedNumberOfRowsPerSection;
    NSColor *_spriteColor;
    NSIndexSet *_selectedItemsPerSection;
    struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } _assetBadgeInfos[12];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)_initializeBadgeInfos;
- (void)_initializeSelectedItems;
- (struct PXGAssetDecorationInfo { unsigned long long x0; double x1; long long x2; long long x3; })assetDecorationInfoForAsset:(id)a0 atSpriteIndex:(unsigned int)a1 inLayout:(id)a2;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (char)hidesTopLeadingBadgesInLayout:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct { float x0; float x1; float x2; float x3; })overlayInsetsForSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (char)wantsAssetBadgeDecorationsInLayout:(id)a0;
- (char)wantsFileSizeBadgesInLayout:(id)a0;
- (char)wantsInteractiveFavoriteBadgesInLayout:(id)a0;

@end
