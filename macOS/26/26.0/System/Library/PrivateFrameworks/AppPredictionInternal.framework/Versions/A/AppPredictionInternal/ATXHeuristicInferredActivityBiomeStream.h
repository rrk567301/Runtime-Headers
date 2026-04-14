@class NSString, BMStream;

@interface ATXHeuristicInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    BMStream *_heuristicEventBiomeStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transitionPublisherFromStartTime:(double)a0;
- (id)init;
- (id)transitionPublisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)initFromInferredModeStream:(id)a0;
- (id)sessionPublisherFromStartTime:(double)a0;
- (id)_transitionPublisherFromInferredModePublisher:(id)a0;
- (void).cxx_destruct;

@end
