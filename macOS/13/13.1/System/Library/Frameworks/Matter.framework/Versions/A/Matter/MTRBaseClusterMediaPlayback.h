@class MTRBaseDevice;

@interface MTRBaseClusterMediaPlayback : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentStateWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeStartTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeDurationWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSampledPositionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePlaybackSpeedWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSeekRangeEndWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSeekRangeStartWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (void)pauseWithCompletionHandler:(id /* block */)a0;
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
- (void)playWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)pauseWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopPlaybackWithCompletionHandler:(id /* block */)a0;
- (void)stopPlaybackWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)startOverWithCompletionHandler:(id /* block */)a0;
- (void)startOverWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)previousWithCompletionHandler:(id /* block */)a0;
- (void)previousWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)nextWithCompletionHandler:(id /* block */)a0;
- (void)nextWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)rewindWithCompletionHandler:(id /* block */)a0;
- (void)rewindWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)fastForwardWithCompletionHandler:(id /* block */)a0;
- (void)fastForwardWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)skipForwardWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)skipBackwardWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)seekWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeCurrentStateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentStateWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeStartTimeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeStartTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeDurationWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeDurationWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSampledPositionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSampledPositionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributePlaybackSpeedWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePlaybackSpeedWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSeekRangeEndWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSeekRangeEndWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSeekRangeStartWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSeekRangeStartWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
