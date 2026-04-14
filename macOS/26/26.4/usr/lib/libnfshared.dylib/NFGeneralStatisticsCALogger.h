@interface NFGeneralStatisticsCALogger : NSObject

+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)updateDailyTagStatistic:(id)a0;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (long long)_bucketizeOverCurrentCount:(long long)a0;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)postGeneralDeviceStatistics;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)_resetDailyTagStatisticToDefaults;
+ (void)postDailyTagStatistics;

@end
