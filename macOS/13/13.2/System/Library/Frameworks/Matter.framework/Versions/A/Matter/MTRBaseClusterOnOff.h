@class MTRBaseDevice;

@interface MTRBaseClusterOnOff : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOnOffWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeGlobalSceneControlWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOnTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOffWaitTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeStartUpOnOffWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

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
- (void)offWithCompletionHandler:(id /* block */)a0;
- (void)offWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)onWithCompletionHandler:(id /* block */)a0;
- (void)onWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)toggleWithCompletionHandler:(id /* block */)a0;
- (void)toggleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)offWithEffectWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)onWithRecallGlobalSceneWithCompletionHandler:(id /* block */)a0;
- (void)onWithRecallGlobalSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)onWithTimedOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeOnOffWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeOnOffWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeGlobalSceneControlWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeGlobalSceneControlWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeOnTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOnTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOnTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeOnTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeOffWaitTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOffWaitTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOffWaitTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeOffWaitTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeStartUpOnOffWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeStartUpOnOffWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStartUpOnOffWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeStartUpOnOffWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
