@class NSMutableDictionary;

@interface BWFanOutNode : BWNode {
    id *_outputsCArray;
    BOOL *_outputsDiscardsAttachedMedia;
    NSMutableDictionary *_outputsAllowedAttachedMediaKeys;
    NSMutableDictionary *_outputsDisallowedAttachedMediaKeys;
    int _outputsCount;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)setAllowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)setDisallowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (void)makeCurrentConfigurationLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;

@end
