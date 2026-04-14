@interface NFGeneralStatisticsCALogger : NSObject

+ (void)postDailyTagStatistics;
+ (void)postGeneralDeviceStatistics;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)_resetDailyTagStatisticToDefaults;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)updateDailyTagStatistic:(id)a0;

@end
