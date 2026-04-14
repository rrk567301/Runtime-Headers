@interface VoiceActions.VASpeechAPISpotter : VoiceActions.VAKeywordSpotterBase <VoiceActions.VASpeechDetectorDelegate> {
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ inputStream;
    void /* unknown type, empty encoding */ inputStreamBuilder;
    void /* unknown type, empty encoding */ feedEmptyBufferTillFinalResultTask;
    void /* unknown type, empty encoding */ recognizerTask;
    void /* unknown type, empty encoding */ speechAPITask;
    void /* unknown type, empty encoding */ vadTask;
    void /* unknown type, empty encoding */ speechDetector;
    void /* unknown type, empty encoding */ timingInfo;
    void /* unknown type, empty encoding */ asrDelegate;
    void /* unknown type, empty encoding */ speechDetectorDelegate;
    void /* unknown type, empty encoding */ speechDetectorOutputStream;
    void /* unknown type, empty encoding */ runtimeParameters;
    void /* unknown type, empty encoding */ audioDuringSpeech;
    void /* unknown type, empty encoding */ stopped;
    void /* unknown type, empty encoding */ pausedDetector;
    void /* unknown type, empty encoding */ speechAPISpotterConfiguration;
    void /* unknown type, empty encoding */ speechEnded;
    void /* unknown type, empty encoding */ gotFinalResult;
    void /* unknown type, empty encoding */ gotPartialResult;
}

- (void).cxx_destruct;
- (void)didDetectEndOfSpeechWithProbability:(float)a0 threshold:(float)a1 hostTime:(unsigned long long)a2;
- (void)didDetectStartOfSpeechWithProbability:(float)a0 threshold:(float)a1 hostTime:(unsigned long long)a2;
- (void)endOfAudioWithByteCountAfterEndOfSpeech:(unsigned int)a0;

@end
