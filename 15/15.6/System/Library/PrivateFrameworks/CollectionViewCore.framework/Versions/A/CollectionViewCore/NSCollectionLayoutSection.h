@class UICollectionLayoutSectionOrthogonalScrollingProperties, NSArray, NSIndexSet, NSCollectionLayoutGroup, NSDictionary;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    char _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    char _isEmptySection;
    UICollectionLayoutSectionOrthogonalScrollingProperties *_orthogonalScrollingProperties;
}

@property (copy, nonatomic) NSCollectionLayoutGroup *group;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (readonly, nonatomic) NSDictionary *decorationItemssDict;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic, getter=_callback) id<_UICollectionLayoutSectionCallback> callback;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double _cornerRadius;
@property (nonatomic, getter=_clipsContentToBounds, setter=_setClipsContentToBounds:) char _clipsContentToBounds;
@property (nonatomic, getter=_excludesBoundarySupplementariesFromClipping, setter=_setExcludesBoundarySupplementariesFromClipping:) char _excludesBoundarySupplementariesFromClipping;
@property (nonatomic, getter=_clipsBackgroundDecorationsToContent, setter=_setClipsBackgroundDecorationsToContent:) char _clipsBackgroundDecorationsToContent;
@property (nonatomic, getter=_clippingInsets, setter=_setClippingInsets:) struct CVCDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _clippingInsets;
@property (nonatomic, getter=_preBoundaryPadding, setter=_setPreBoundaryPadding:) double _preBoundaryPadding;
@property (nonatomic, getter=_postBoundaryPadding, setter=_setPostBoundaryPadding:) double _postBoundaryPadding;
@property (nonatomic) char prefersListSolver;
@property (nonatomic) struct CVCDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) long long supplementaryContentInsetsReference;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (readonly, nonatomic) UICollectionLayoutSectionOrthogonalScrollingProperties *orthogonalScrollingProperties;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) char supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isEmptySection;
- (id)_auxillaryItemForElementKind:(id)a0 category:(unsigned long long)a1;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (char)_containsEstimatedSizeElement;
- (id)_descriptionProperties;
- (char)_hasBackgroundDecorationItem;
- (char)_hasVisibleItemsHandler;
- (char)_isListSolverCompatibleForLayoutAxis:(unsigned long long)a0;
- (id)initWithGroup:(id)a0 contentInsets:(struct CVCDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentInsetsReference:(long long)a2 supplementaryItems:(id)a3 boundarySupplementaryItems:(id)a4 pinnedSupplementaryItemIndexes:(id)a5 interGroupSpacing:(double)a6 visibleItemsInvalidationHandler:(id /* block */)a7 supplementariesFollowInsets:(char)a8 decorationItems:(id)a9 orthogonalScrollingBehavior:(long long)a10 isEmptySection:(char)a11 prefersListSolver:(char)a12;
- (id)initWithLayoutGroup:(id)a0;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (char)scrollsOrthogonally;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
- (void)_didEndSwiping;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_orthogonalScrollingProperties;
- (double)_paddingToBoundarySupplementaries;
- (char)_pinnedSupplementariesShouldOverlap;
- (id)_preferredContainerBackgroundColor;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (char)_wantsBandSelectionVisuals;
- (char)_wantsSwipeActions;
- (void)_willBeginSwiping;
- (char)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (char)_containsBackgroundDecorationItem:(id)a0;
- (id)decorationItemsDict;

@end
