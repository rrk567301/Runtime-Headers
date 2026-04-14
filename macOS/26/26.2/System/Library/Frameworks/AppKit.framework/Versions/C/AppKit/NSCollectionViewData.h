@class NSCollectionViewLayout, NSMapTable, NSMutableIndexSet, _NSCollectionViewCore, NSMutableArray, NSMutableDictionary;

@interface NSCollectionViewData : NSObject {
    _NSCollectionViewCore *_collectionView;
    NSCollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    id *_globalItems;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validLayoutRect;
    long long _numItems;
    long long _numSections;
    long long *_sectionItemCounts;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct { unsigned char contentSizeIsValid : 1; unsigned char itemCountsAreValid : 1; unsigned char layoutIsPrepared : 1; unsigned char layoutLocked : 1; } _collectionViewDataFlags;
}

@property (readonly, nonatomic) BOOL layoutIsPrepared;
@property (nonatomic, getter=isLayoutLocked) BOOL layoutLocked;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) NSMutableArray *clonedCellAttributes;
@property (readonly, nonatomic) NSMutableArray *clonedSupplementaryAttributes;
@property (readonly, nonatomic) NSMutableArray *clonedDecorationAttributes;

+ (void)initialize;

- (void)_validateItemCounts;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)knownSupplementaryElementKinds;
- (void)validateDecorationViews;
- (long long)numberOfItems;
- (BOOL)isIndexPathValid:(id)a0;
- (BOOL)dataSourceMatchesCurrentCounts;
- (id)knownDecorationElementKinds;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (void)_validateContentSize;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItemAtIndexPath:(id)a0;
- (void)invalidate:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForGlobalItemIndex:(long long)a0;
- (id)existingSupplementaryLayoutAttributes;
- (id)initWithCollectionView:(id)a0 layout:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewContentRect;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)layoutAttributesForCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 validateLayout:(BOOL)a1;
- (id)validatedIndexPathForItemAtGlobalIndex:(long long)a0;
- (long long)globalIndexForItemAtIndexPath:(id)a0;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateItemsAtIndexPaths:(id)a0;
- (void)_prepareToLoadData;
- (void)validateSupplementaryViews;
- (long long)validatedGlobalIndexForItemAtIndexPath:(id)a0;
- (BOOL)isGlobalIndexValid:(long long)a0;
- (void)invalidateDecorationIndexPaths:(id)a0;
- (id)indexPathForItemAtGlobalIndex:(long long)a0;
- (void)invalidateSupplementaryIndexPaths:(id)a0;
- (void)_setLayoutAttributes:(id)a0 atGlobalItemIndex:(int)a1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForGlobalItemIndex:(long long)a0;
- (void)dealloc;
- (void)_updateItemCounts;
- (void)_loadEverything;
- (void)_cacheLayoutAttributes:(id)a0;
- (id)_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareLayoutIfNeeded;
- (id)_screenPageForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long *)_sectionItemCounts;
- (BOOL)hasValidItemCounts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
