@interface RTLearnedRouteMultiModalStatisticsMetrics : NSObject

@property float multiModalBikeDistanceAfterDriveAvg;
@property float multiModalBikeDistanceAfterDriveMax;
@property float multiModalBikeDistanceBeforeDriveAvg;
@property float multiModalBikeDistanceBeforeDriveMax;
@property float multiModalBikeTimeAfterDriveAvg;
@property float multiModalBikeTimeAfterDriveMax;
@property float multiModalBikeTimeBeforeDriveAvg;
@property float multiModalBikeTimeBeforeDriveMax;
@property float multiModalDriveDistanceMax;
@property float multiModalDriveTimeMax;
@property float multiModalNumBikeSegmentsAvg;
@property float multiModalNumBikeSegmentsMax;
@property float multiModalNumWalkSegmentsAvg;
@property float multiModalNumWalkSegmentsMax;
@property int multiModalTripSegmentsBikeOnly;
@property int multiModalTripSegmentsWalkOnly;
@property int multiModalTripSegmentsWithDrive;
@property float multiModalWalkDistanceAfterDriveAvg;
@property float multiModalWalkDistanceAfterDriveMax;
@property float multiModalWalkDistanceBeforeDriveAvg;
@property float multiModalWalkDistanceBeforeDriveMax;
@property float multiModalWalkTimeAfterDriveAvg;
@property float multiModalWalkTimeAfterDriveMax;
@property float multiModalWalkTimeBeforeDriveAvg;
@property float multiModalWalkTimeBeforeDriveMax;
@property int numCyclingAfterDriveClusters;
@property int numCyclingBeforeDriveClusters;
@property int numCyclingOnlyClusters;
@property int numDrivingOnlyClusters;
@property int numWalkingAfterDriveClusters;
@property int numWalkingBeforeDriveClusters;
@property int numWalkingOnlyClusters;

- (id)init;
- (id)initForDefaultMetric;

@end
