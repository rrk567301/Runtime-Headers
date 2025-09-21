@interface NFGeneralStatisticsCALogger : NSObject

+ (void)postGeneralDeviceStatistics;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)_resetDailyTagStatisticToDefaults;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)updateDailyTagStatistic:(id)a0;
+ (void)postDailyTagStatistics;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;

@end
