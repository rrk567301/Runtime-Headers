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

- (void)setDisallowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)addExtendedOutput;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)setAllowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (void)removeExtendedOutput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)makeCurrentConfigurationLive;
- (void)activateExtendedOutput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;

@end
