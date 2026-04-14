@class MTRBaseDevice;

@interface MTRBaseClusterFanControl : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFanModeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFanModeSequenceWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePercentSettingWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePercentCurrentWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSpeedMaxWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSpeedSettingWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSpeedCurrentWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeRockSupportWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeRockSettingWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeWindSupportWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeWindSettingWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeFanModeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeFanModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFanModeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeFanModeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeFanModeSequenceWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeFanModeSequenceWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFanModeSequenceWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeFanModeSequenceWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributePercentSettingWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributePercentSettingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePercentSettingWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributePercentSettingWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributePercentCurrentWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePercentCurrentWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSpeedMaxWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSpeedMaxWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSpeedSettingWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeSpeedSettingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSpeedSettingWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeSpeedSettingWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSpeedCurrentWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSpeedCurrentWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeRockSupportWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeRockSupportWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeRockSettingWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeRockSettingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRockSettingWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeRockSettingWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeWindSupportWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeWindSupportWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeWindSettingWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeWindSettingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeWindSettingWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeWindSettingWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
