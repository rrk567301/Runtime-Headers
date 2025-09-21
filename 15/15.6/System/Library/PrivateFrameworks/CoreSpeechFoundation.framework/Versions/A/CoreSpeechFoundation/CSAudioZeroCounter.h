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
    char _shouldDeinterleaveAudio;
}

- (void).cxx_destruct;
- (void)getZeroStatisticsFromBuffer:(id)a0 entireSamples:(unsigned int)a1;
- (id)initWithToken:(id)a0 sampleRate:(float)a1 numChannels:(unsigned int)a2;
- (void)stopCountingZeroStatisticsWithReporter:(id)a0;
- (void)resetWithSampleRate:(float)a0;

@end
