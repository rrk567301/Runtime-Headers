@class NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log;

@interface PowerUICECGridDataManager : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double refetchPeriod;
@property (nonatomic) double intervalDuration;
@property (nonatomic) char tSavingOpportunity;
@property (nonatomic) char tChargeNow;
@property (nonatomic) char isDemoMode;
@property (retain, nonatomic) NSDate *lastForecastFetchDate;
@property (readonly, nonatomic) NSMutableArray *cleanIntervals;

+ (id)sharedInstance;
+ (id)cleanIntervalsStringFromDates:(id)a0 withIntervalDuration:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (void)setupDemoChargingTimeOverForecastHorizon:(double)a0 withKChargingSegments:(long long)a1;
- (char)shouldChargeNow;
- (double)averageEmissionsOverForecastHorizon:(double)a0;
- (long long)emissionsForTime:(id)a0 overForecastHorizon:(double)a1;
- (char)enoughVariationForForecast:(id)a0 withMinDifference:(double)a1;
- (id)forecastFromDefaults;
- (void)recordForecastInDefaults:(id)a0;
- (void)setupChargingTime:(double)a0 forPluggedInTime:(double)a1;
- (char)shouldEngageForPluggedInTime:(double)a0;
- (id)storedForecastForDemoAnalyticsWithForecastHorizon:(double)a0;
- (unsigned long long)thresholdFromForecast:(id)a0 forChargeTime:(double)a1;

@end
