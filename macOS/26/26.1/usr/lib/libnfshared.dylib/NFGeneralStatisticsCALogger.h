@interface NFGeneralStatisticsCALogger : NSObject

+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)postGeneralDeviceStatistics;
+ (void)updateDailyTagStatistic:(id)a0;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)_resetDailyTagStatisticToDefaults;
+ (void)postDailyTagStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postAnalyticsGeneralTransactionStatistics;

@end
