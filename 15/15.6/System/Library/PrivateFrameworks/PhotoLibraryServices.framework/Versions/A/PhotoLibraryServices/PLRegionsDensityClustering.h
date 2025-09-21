@interface PLRegionsDensityClustering : PLRegionsClustering

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) char includeDefiniteClusters;
@property (nonatomic) double definiteClusterTimeIntervalDistance;
@property (nonatomic) double definiteClusterMaximumDistanceUnit;
@property (nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;
@property (nonatomic) char removeDefiniteClustersObjectsFromDataset;
@property (nonatomic) char includeExtensiveClusters;
@property (nonatomic) double extensiveClusterTimeIntervalDistance;
@property (nonatomic) double extensiveClusterMaximumDistanceUnit;
@property (nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;
@property (nonatomic) char removeExtensiveClustersObjectsFromDataset;
@property (nonatomic) char removeExtensiveClustersContainingDefiniteClusters;

- (id)init;
- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (id /* block */)_locationBasedClusteringBlock;
- (id /* block */)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)a0;

@end
