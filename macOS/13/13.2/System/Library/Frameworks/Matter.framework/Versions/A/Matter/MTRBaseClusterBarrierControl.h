@class MTRBaseDevice;

@interface MTRBaseClusterBarrierControl : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierMovingStateWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierSafetyStatusWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierCapabilitiesWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierOpenEventsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierCloseEventsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierCommandOpenEventsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierCommandCloseEventsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierOpenPeriodWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierClosePeriodWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBarrierPositionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

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
- (void)barrierControlGoToPercentWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)barrierControlStopWithCompletionHandler:(id /* block */)a0;
- (void)barrierControlStopWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeBarrierMovingStateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBarrierMovingStateWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierSafetyStatusWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBarrierSafetyStatusWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBarrierCapabilitiesWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierOpenEventsWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierOpenEventsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierCloseEventsWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierCloseEventsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierCommandOpenEventsWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierCommandOpenEventsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierCommandCloseEventsWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierCommandCloseEventsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierOpenPeriodWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierOpenPeriodWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierClosePeriodWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeAttributeBarrierClosePeriodWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeBarrierPositionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBarrierPositionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
