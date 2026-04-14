@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _quantizationFrameDuration;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
    struct OpaqueCMClock { } *_hostTimeClock;
}

+ (void)initialize;

- (struct OpaqueCMClock { } *)masterClock;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (struct OpaqueCMClock { } *)sourceClock;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithMediaType:(unsigned int)a0;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })quantizationFrameDuration;
- (void)setQuantizationFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
