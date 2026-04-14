@class PowerUIAnalyticsManager, NSString, NSArray, NSDate, NSObject, NSNumber;
@protocol OS_os_log;

@interface PowerUIBatteryMitigationManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PowerUIAnalyticsManager *analyticsManager;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSArray *lastDOD0Values;
@property (retain) NSDate *lastDOD0Update;
@property (retain, nonatomic) NSArray *lastQMaxArray;
@property (retain) NSDate *lastQMaxUpdate;
@property unsigned long long decisionSignalID;
@property (nonatomic) unsigned long long testDaysSinceQmaxUpdate;
@property (nonatomic) unsigned long long testHoursSinceDOD0Update;
@property (retain, nonatomic) NSNumber *lastDOD0ValueAtQualQmax;
@property (retain, nonatomic) NSDate *lastQualifiedQmaxDate;
@property (retain, nonatomic) NSDate *lastFullChargeDate;
@property (retain, nonatomic) NSDate *lastAttemptedFullChargeDate;
@property (nonatomic) int previousQMaxState;
@property (nonatomic) int previousOCVState;
@property (nonatomic) int previousFullChargeState;
@property (nonatomic) int previousDaysSinceQMax;
@property (nonatomic) int previousDaysSinceOCV;
@property (nonatomic) int previousDaysSinceFullCharge;
@property (nonatomic) double timeSinceLastDOD0Update;
@property (nonatomic) double timeSinceLastQmaxUpdate;

+ (id)sharedManager;
+ (id)managerWithDefaultsDomain:(id)a0;

- (void).cxx_destruct;
- (id)dod0ArrayFromBatteryProperties:(id)a0;
- (double)additionalWaitTime;
- (double)additionalWaitTimeForDOD0WithInterval:(double)a0 returnsGaugingState:(int *)a1;
- (double)additionalWaitTimeForQMaxWithInterval:(double)a0 returnsGaugingState:(int *)a1;
- (double)additionalWaitTimeWithProperties:(id)a0;
- (id)initWithDefaultsDomain:(id)a0;
- (double)maxAdditionalWaitTimeForQMax;
- (id)qMaxFromBatteryProperties:(id)a0;
- (id)readLastDOD0Update;
- (id)readLastDOD0Values;
- (id)readLastQMaxArray;
- (id)readLastQMaxUpdate;
- (BOOL)submitAnalyticsIfNecessaryWithQMaxState:(int)a0 withOCVState:(int)a1 withFullChargeState:(int)a2 withDaysSinceQmax:(int)a3 withDaysSinceOCV:(int)a4 withDaysSinceFullCharge:(int)a5;
- (void)updateLastDOD0Values:(id)a0 atDate:(id)a1;
- (void)updateLastQMaxArray:(id)a0 atDate:(id)a1;

@end
