@class NSDictionary;

@interface ATXAppPredictionDataHarvesterConstants : NSObject

@property (class, nonatomic, readonly) float actionPredictionSessionDataHarvestSamplingRate;
@property (class, nonatomic, readonly) float appPredictionSessionDataHarvestSamplingRate;
@property (class, nonatomic, readonly) float documentPredictionSessionDataHarvestSamplingRate;
@property (class, nonatomic, readonly) unsigned long long actionPredictionSessionDataHarvestMaxItems;
@property (class, nonatomic, readonly) unsigned long long appPredictionSessionDataHarvestMaxItems;
@property (class, nonatomic, readonly) unsigned long long documentPredictionSessionDataHarvestMaxItems;
@property (class, nonatomic, readonly) unsigned long long extraItemsToLog;
@property (class, nonatomic, readonly) NSDictionary *dataHarvestingConstants;

- (id)init;
- (void).cxx_destruct;

@end
