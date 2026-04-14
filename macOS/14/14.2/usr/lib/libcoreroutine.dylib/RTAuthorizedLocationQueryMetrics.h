@class NSDate;

@interface RTAuthorizedLocationQueryMetrics : NSObject

@property float daemonResponseLatencyMs;
@property BOOL responseValue;
@property float userTimeOffsetHours;
@property int loiFamiliarityRank;
@property int numFamiliarLois;
@property float maxCumulativeDwellTimeForNotFamiliarLoiHours;
@property int maxUniqueVisitDaysForNotFamiliarLois;
@property float visitDwellMinutes;
@property float normalizedDistanceToCentroid;
@property int rejectionReasonCode;
@property int technologyAvailability;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (id)convertToDictionary;
- (void)startTimer;
- (void)endTimer;
- (void)submitToCoreAnalytics;

@end
