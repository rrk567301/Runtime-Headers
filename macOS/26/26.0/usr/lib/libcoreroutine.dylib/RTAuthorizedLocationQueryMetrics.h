@class NSDate;

@interface RTAuthorizedLocationQueryMetrics : NSObject

@property float daemonResponseLatencyMs;
@property BOOL responseValue;
@property float userTimeOffsetHours;
@property int loiFamiliarityRank;
@property int numFamiliarLois;
@property float visitDwellMinutes;
@property float normalizedDistanceToCentroid;
@property int rejectionReasonCode;
@property BOOL isHistoricallyALowDiversityLocation;
@property int technologyAvailability;
@property int locationAgeMinutes;
@property int historicalRejectionReasonCode;
@property float historicalRejectionSpeedMps;
@property int authorizedLocationConfirmationTriggerReason;
@property BOOL isLocationRequestedPeriodically;
@property double timeSinceLastPeriodicLocRequest;
@property double durationBetweenTwoConfirmationAlgoScheduling_s;
@property int lastConfirmationRejectionReasonCode;
@property double timeSincePreviousXPCSchedule;
@property double timeSinceLastUserQuery;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

- (void)startTimer;
- (id)init;
- (void).cxx_destruct;
- (void)endTimer;
- (void)setMotionSpeedLimitRejectionCodeFromLookbackHours:(double)a0;

@end
