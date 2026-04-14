@class MTRDevice;

@interface MTRClusterMediaPlayback : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (void)playWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)playWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)pauseWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)pauseWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopPlaybackWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopPlaybackWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)startOverWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)startOverWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)previousWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)previousWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)nextWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)nextWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)rewindWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)rewindWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)fastForwardWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)fastForwardWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)skipForwardWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)skipBackwardWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)seekWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributeCurrentStateWithParams:(id)a0;
- (id)readAttributeStartTimeWithParams:(id)a0;
- (id)readAttributeDurationWithParams:(id)a0;
- (id)readAttributeSampledPositionWithParams:(id)a0;
- (id)readAttributePlaybackSpeedWithParams:(id)a0;
- (id)readAttributeSeekRangeEndWithParams:(id)a0;
- (id)readAttributeSeekRangeStartWithParams:(id)a0;

@end
