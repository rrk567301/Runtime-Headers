@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _quantizationFrameDuration;
    unsigned long long _maxFramesToDropWhileTimeSyncClockStarts;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
    int _timeSyncMSGClockConversionFailureCount;
    struct OpaqueCMClock { } *_hostTimeClock;
}

+ (void)initialize;

- (BOOL)hasNonLiveConfigurationChanges;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)sourceClock;
- (struct OpaqueCMClock { } *)masterClock;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })quantizationFrameDuration;
- (void)setQuantizationFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (id)initWithMediaType:(unsigned int)a0;
- (void)dealloc;

@end
