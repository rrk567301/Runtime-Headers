@class RTAuthorizedLocationCurationMetrics, NSDate;

@interface RTAuthorizedLocationQueryMetrics : NSObject

@property (retain) RTAuthorizedLocationCurationMetrics *curationMetrics;
@property float daemonResponseLatencyMs;
@property BOOL responseValue;
@property float userTimeOffsetHours;
@property int loiFamiliarityRank;
@property int numFamiliarLois;
@property float visitDwellMinutes;
@property float normalizedDistanceToCentroid;
@property int rejectionReasonCode;
@property int technologyAvailability;
@property int locationAgeMinutes;
@property int historicalRejectionReasonCode;
@property float historicalRejectionSpeedMps;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (id)convertToDictionary;
- (void)startTimer;
- (void)endTimer;
- (void)setMotionSpeedLimitRejectionCodeFromLookbackHours:(double)a0;
- (void)submitToCoreAnalytics;

@end
