@interface VoiceActions.VAKeywordSpottedEvent : NSObject {
    void /* unknown type, empty encoding */ keyword;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ hostTime;
    void /* unknown type, empty encoding */ intervalFromEndOfSpeech;
    void /* unknown type, empty encoding */ silenceBefore;
    void /* unknown type, empty encoding */ silenceAfter;
    void /* unknown type, empty encoding */ speechDuring;
    void /* unknown type, empty encoding */ audioBytes;
    void /* unknown type, empty encoding */ secondPassResult;
    void /* unknown type, empty encoding */ generatedKeyword;
    void /* unknown type, empty encoding */ secondPassDuration;
    void /* unknown type, empty encoding */ mismatch;
    void /* unknown type, empty encoding */ secondPassKeywordMatched;
}

- (id)init;
- (void).cxx_destruct;

@end
