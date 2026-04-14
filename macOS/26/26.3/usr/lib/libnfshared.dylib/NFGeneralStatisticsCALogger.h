@interface NFGeneralStatisticsCALogger : NSObject

+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)postDailyTagStatistics;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)_resetDailyTagStatisticToDefaults;
+ (void)postGeneralDeviceStatistics;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)updateDailyTagStatistic:(id)a0;

@end
