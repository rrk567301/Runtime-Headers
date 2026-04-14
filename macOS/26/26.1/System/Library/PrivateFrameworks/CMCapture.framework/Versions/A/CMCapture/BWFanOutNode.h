@class NSMutableDictionary, NSMutableArray;

@interface BWFanOutNode : BWNode {
    id *_outputsCArray;
    BOOL *_outputsDiscardsAttachedMedia;
    NSMutableDictionary *_outputsAllowedAttachedMediaKeys;
    NSMutableDictionary *_outputsDisallowedAttachedMediaKeys;
    int _outputsCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _extendedOutputsLock;
    NSMutableArray *_extendedOutputs;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)makeCurrentConfigurationLive;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)removeExtendedOutput:(id)a0;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)setDisallowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;
- (void)dealloc;
- (void)activateExtendedOutput:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)addExtendedOutput;
- (void)setAllowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;

@end
