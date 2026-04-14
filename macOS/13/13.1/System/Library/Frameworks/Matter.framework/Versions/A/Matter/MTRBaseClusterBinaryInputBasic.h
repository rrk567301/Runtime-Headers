@class MTRBaseDevice;

@interface MTRBaseClusterBinaryInputBasic : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeActiveTextWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeDescriptionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeInactiveTextWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOutOfServiceWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePolarityWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePresentValueWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeReliabilityWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeStatusFlagsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeApplicationTypeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

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
- (void)readAttributeActiveTextWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeActiveTextWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveTextWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeActiveTextWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeDescriptionWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeDescriptionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeDescriptionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeInactiveTextWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeInactiveTextWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInactiveTextWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeInactiveTextWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeOutOfServiceWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOutOfServiceWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOutOfServiceWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeOutOfServiceWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributePolarityWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePolarityWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributePresentValueWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributePresentValueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePresentValueWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributePresentValueWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeReliabilityWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeReliabilityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeReliabilityWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeReliabilityWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeStatusFlagsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeStatusFlagsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeApplicationTypeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeApplicationTypeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
