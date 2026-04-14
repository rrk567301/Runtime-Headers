@class NSString;

@interface CSAudioZeroCounter : NSObject {
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSzForCSLogging;
    unsigned int _zeroCounterHeartBeatThreshold;
    unsigned int _loggingSampleHeartBeat;
    unsigned int _zeroCounterWinSzForReport;
    unsigned int _maxContinuousZeroCount;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}

- (void)resetWithSampleRate:(float)a0;
- (void).cxx_destruct;
- (void)stopCountingZeroStatisticsWithReporter:(id)a0;
- (id)initWithToken:(id)a0 sampleRate:(float)a1 numChannels:(unsigned int)a2;
- (void)getZeroStatisticsFromBuffer:(id)a0 entireSamples:(unsigned int)a1;

@end
