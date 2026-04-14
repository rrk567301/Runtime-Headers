@class GKSupplementaryViewMetrics, GKSectionMetrics;
@protocol NSUICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : NSUICollectionViewLayoutAttributes

@property (nonatomic) BOOL isPartOfGlobalPinningGroup;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) BOOL doesAbutLeftOfCollectionView;
@property (nonatomic) BOOL allSectionItemsVisible;
@property (nonatomic) BOOL isPinned;
@property (nonatomic) double unpinnedY;
@property (retain, nonatomic) id<NSUICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
