@interface RTTripClusterWalkAndBikeTripStats : NSObject

@property (readonly, nonatomic) BOOL isWalkSegmentBeforeDrivePresent;
@property (readonly, nonatomic) BOOL isWalkSegmentAfterDrivePresent;
@property (readonly, nonatomic) BOOL isBikeSegmentBeforeDrivePresent;
@property (readonly, nonatomic) BOOL isBikeSegmentAfterDrivePresent;
@property (readonly, nonatomic) double walkTimeDurationBeforeDrive_sec;
@property (readonly, nonatomic) double walkTimeDurationAfterDrive_sec;
@property (readonly, nonatomic) double bikeTimeDurationBeforeDrive_sec;
@property (readonly, nonatomic) double bikeTimeDurationAfterDrive_sec;
@property (readonly, nonatomic) double walkDistanceBeforeDrive_m;
@property (readonly, nonatomic) double walkDistanceAfterDrive_m;
@property (readonly, nonatomic) double bikeDistanceBeforeDrive_m;
@property (readonly, nonatomic) double bikeDistanceAfterDrive_m;

- (id)init;
- (BOOL)hasValidData;
- (long long)transportModeAfterDrive;
- (long long)transportModeBeforeDrive;
- (long long)transportModeNoDrive;
- (void)updateWalkAndBikeStats:(id)a0 isTripSegmentBeforeDriving:(BOOL)a1;

@end
