@class GKSupplementaryViewMetrics, GKSectionMetrics;
@protocol NSUICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : NSUICollectionViewLayoutAttributes

@property (nonatomic) char isPartOfGlobalPinningGroup;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) char doesAbutLeftOfCollectionView;
@property (nonatomic) char allSectionItemsVisible;
@property (nonatomic) char isPinned;
@property (nonatomic) double unpinnedY;
@property (retain, nonatomic) id<NSUICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
