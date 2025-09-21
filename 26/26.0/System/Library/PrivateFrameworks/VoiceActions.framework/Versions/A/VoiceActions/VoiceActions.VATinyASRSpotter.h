@interface VoiceActions.VATinyASRSpotter : VoiceActions.VAKeywordSpotterBase <VoiceActions.VASpeechDetectorDelegate> {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ vadState;
    void /* unknown type, empty encoding */ tasrDelegate;
    void /* unknown type, empty encoding */ strategyProvider;
    void /* unknown type, empty encoding */ tasrConfig;
    void /* unknown type, empty encoding */ tasrModel;
    void /* unknown type, empty encoding */ usedPartialAsFinal;
    void /* unknown type, empty encoding */ gotEndOfSpeech;
    void /* unknown type, empty encoding */ gotFinalResult;
    void /* unknown type, empty encoding */ shouldResetData;
    void /* unknown type, empty encoding */ currentTasrResult;
    void /* unknown type, empty encoding */ sleepTask;
    void /* unknown type, empty encoding */ vadOutputActor;
    void /* unknown type, empty encoding */ lastModelInputBeforeStartOfSpeech;
    void /* unknown type, empty encoding */ lastModelInputBeforeUnblock;
    void /* unknown type, empty encoding */ fuzzyKeywordsWithSpaces;
    void /* unknown type, empty encoding */ blockInferenceRequestPendingFinalResult;
    void /* unknown type, empty encoding */ vadTask;
    void /* unknown type, empty encoding */ speechDetector;
    void /* unknown type, empty encoding */ speechDetectorDelegate;
    void /* unknown type, empty encoding */ audioDuringSpeech;
    void /* unknown type, empty encoding */ speechDetectorAudioOutputStream;
    void /* unknown type, empty encoding */ speechDetectorFeatureOutputStream;
    void /* unknown type, empty encoding */ saveAudioQueue;
}

- (void).cxx_destruct;
- (void)didDetectEndOfSpeechWithProbability:(float)a0 threshold:(float)a1 hostTime:(unsigned long long)a2;
- (void)didDetectStartOfSpeechWithProbability:(float)a0 threshold:(float)a1 hostTime:(unsigned long long)a2;
- (void)endOfAudioWithByteCountAfterEndOfSpeech:(unsigned int)a0;

@end
