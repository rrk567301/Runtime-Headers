@class NSArray, NSIndexSet, NSCollectionLayoutGroup, NSDictionary;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
    NSArray *_boundarySupplementaryItems;
    NSArray *_decorationItems;
}

@property (copy, nonatomic) NSCollectionLayoutGroup *group;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (readonly, nonatomic) NSDictionary *decorationItemssDict;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long contentInsetsReference;
@property (readonly, nonatomic, getter=_callback) id<_UICollectionLayoutSectionCallback> callback;
@property (nonatomic) BOOL prefersListSolver;
@property struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property double interGroupSpacing;
@property long long orthogonalScrollingBehavior;
@property (copy) NSArray *boundarySupplementaryItems;
@property BOOL supplementariesFollowContentInsets;
@property (copy) id /* block */ visibleItemsInvalidationHandler;
@property (copy) NSArray *decorationItems;

+ (id)sectionWithGroup:(id)a0;
+ (id)_emptySection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(int)a0;
- (BOOL)_containsBackgroundDecorationItem:(id)a0;
- (id)initWithGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentInsetsReference:(long long)a2 supplementaryItems:(id)a3 boundarySupplementartItems:(id)a4 pinnedSupplementaryItemIndexes:(id)a5 interGroupSpacing:(double)a6 visibleItemsInvalidationHandler:(id /* block */)a7 supplementariesFollowInsets:(BOOL)a8 decorationItems:(id)a9 orthogonalScrollingBehavior:(long long)a10 isEmptySection:(BOOL)a11 prefersListSolver:(BOOL)a12;
- (id)initWithLayoutGroup:(id)a0;
- (BOOL)_isEmptySection;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (id)_auxiliaryItemForElementKind:(id)a0 category:(long long)a1;
- (id)decorationItemsDict;
- (BOOL)scrollsOrthogonally;
- (id)initWithGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 supplementaryItems:(id)a2 boundarySupplementartItems:(id)a3 pinnedSupplementaryItemIndexes:(id)a4 interGroupSpacing:(double)a5 visibleItemsInvalidationHandler:(id /* block */)a6 supplementariesFollowInsets:(BOOL)a7 decorationItems:(id)a8 orthogonalScrollingBehavior:(long long)a9 isEmptySection:(BOOL)a10 prefersListSolver:(BOOL)a11;
- (BOOL)_hasVisibleItemsHandler;
- (BOOL)_hasBackgroundDecorationItem;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (BOOL)_containsEstimatedSizeElement;
- (id)_auxillaryItemForElementKind:(id)a0 category:(long long)a1;
- (BOOL)_wantsSwipeActions;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_willBeginSwiping;
- (void)_didEndSwiping;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (double)_paddingToBoundarySupplementaries;
- (id)_preferredContainerBackgroundColor;
- (BOOL)_supportsBandSelection;

@end
