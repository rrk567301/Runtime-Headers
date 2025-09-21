@class NSString;

@interface RTTripClusterProcessorOptions : NSObject

@property (nonatomic) unsigned long long downsampleFactor;
@property (nonatomic) unsigned long long windowSize;
@property (nonatomic) unsigned long long maxLocationPerTrip;
@property (nonatomic) unsigned long long maxProcessedTripSegments;
@property (nonatomic) unsigned long long maxClusterTraversalCount;
@property (nonatomic) unsigned long long maxTripSegmentDistanceForClustering;
@property (nonatomic) unsigned long long maxTripSegmentTimeForClustering;
@property (nonatomic) BOOL writeTripSegmentsToFile;
@property (nonatomic) BOOL enableClusterProcessing;
@property (nonatomic) BOOL saveToHTML;
@property (nonatomic) BOOL useMaxProcessedTripSegments;
@property (nonatomic) BOOL purgeClustersDataBase;
@property (nonatomic) BOOL useRoadCoordinatesForDTW;
@property (nonatomic) double distBetweenTrips_km;
@property (nonatomic) double distanceThreshold_m;
@property (nonatomic) double unreachableDistance_m;
@property (nonatomic) double clusterLifeTimeThreshold_days;
@property (nonatomic) double lengthDeviationThreshold_m;
@property (nonatomic) double locationThresholdRadius_m;
@property (nonatomic) double distAccuracyThreshold_m;
@property (nonatomic) double timeGapBetweenTrips_s;
@property (nonatomic) double familiarityDecayFactor;
@property (nonatomic) unsigned long long clusterProcessorMode;
@property (nonatomic) NSString *tripSegmentRecorderLoggingDirectory;
@property (nonatomic) BOOL recordDebuggingDataInFile;
@property (nonatomic) BOOL learnedRoutesCurrentLocationSPIEnabled;
@property (nonatomic) double startEndRoadCountBufferZonePercentage;

- (id)description;
- (id)initWithDefaultsManager:(id)a0;

@end
