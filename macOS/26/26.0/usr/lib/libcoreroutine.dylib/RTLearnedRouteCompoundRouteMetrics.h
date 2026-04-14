@interface RTLearnedRouteCompoundRouteMetrics : NSObject

@property float compoundRoutesDistanceBetweenAdjacentCompoundTripSegmentsAvg;
@property float compoundRoutesNumDriveSegmentsCompoundedAvg;
@property int compoundRoutesNumFailureDrivesTooFar;
@property int compoundRoutesNumFailureDrivesTooLong;
@property int compoundRoutesNumFailureDrivesTooMany;
@property int compoundRoutesNumFailureTripSegments;
@property int compoundRoutesNumSuccessTripSegments;

- (id)init;
- (id)initForDefaultMetric;

@end
