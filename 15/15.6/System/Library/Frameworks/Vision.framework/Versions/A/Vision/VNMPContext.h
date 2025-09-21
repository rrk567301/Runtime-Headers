@class NSArray;

@interface VNMPContext : NSObject

@property int debugMode;
@property int timerMode;
@property int clusterSplitDistanceType;
@property (retain) NSArray *qualityCriteriaList;
@property char useTimestampAdjustedDistances;
@property char performClustersPostprocessing;
@property char performSceneClassification;
@property float roiAreaThreshold;
@property float inliersRatioThreshold;
@property int numberOfKeypointsToConsider;
@property float naturalClusteringDistanceThreshold;

- (void).cxx_destruct;

@end
