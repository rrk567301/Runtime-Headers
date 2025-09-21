@interface VoiceActions.VAKeywordSpotterBase : VoiceActions.VAKeywordSpotter {
    void /* unknown type, empty encoding */ requestInfo;
    void /* unknown type, empty encoding */ listeningTask;
    void /* unknown type, empty encoding */ strategyLayer;
    void /* unknown type, empty encoding */ runtimeParamsFactory;
    void /* unknown type, empty encoding */ cachedKeywordBiasData;
    void /* unknown type, empty encoding */ speechInProgress;
    void /* unknown type, empty encoding */ numberOfChunksAfterEndOfSpeech;
    void /* unknown type, empty encoding */ speechStartTime;
    void /* unknown type, empty encoding */ numFramesForAveraging;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ threadSafeBool;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
