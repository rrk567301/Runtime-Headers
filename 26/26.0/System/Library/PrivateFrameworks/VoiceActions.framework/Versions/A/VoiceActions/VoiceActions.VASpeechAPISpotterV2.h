@interface VoiceActions.VASpeechAPISpotterV2 : VoiceActions.VAKeywordSpotterBase {
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ inputStreamActor;
    void /* unknown type, empty encoding */ processSpeechApiResultsTask;
    void /* unknown type, empty encoding */ sendAudioToSpeechApiTask;
    void /* unknown type, empty encoding */ asrDelegate;
    void /* unknown type, empty encoding */ speechDetectorDelegate;
    void /* unknown type, empty encoding */ speechEnded;
    void /* unknown type, empty encoding */ gotFinalResult;
    void /* unknown type, empty encoding */ gotPartialResult;
    void /* unknown type, empty encoding */ stringMatchingStrategy;
}

- (void).cxx_destruct;

@end
