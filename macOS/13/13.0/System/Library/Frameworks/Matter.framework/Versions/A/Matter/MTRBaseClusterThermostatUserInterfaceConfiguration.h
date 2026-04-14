@class MTRBaseDevice;

@interface MTRBaseClusterThermostatUserInterfaceConfiguration : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeTemperatureDisplayModeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeKeypadLockoutWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeScheduleProgrammingVisibilityWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

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
- (void)readAttributeTemperatureDisplayModeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeTemperatureDisplayModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTemperatureDisplayModeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeTemperatureDisplayModeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeKeypadLockoutWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeKeypadLockoutWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeKeypadLockoutWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeKeypadLockoutWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeScheduleProgrammingVisibilityWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeScheduleProgrammingVisibilityWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
