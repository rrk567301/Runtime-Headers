@interface AVSTriggerController : NSObject <VoiceActions.VAKeywordSpotterDelegate> {
    void /* unknown type, empty encoding */ audioProvider;
    void /* function */ displayAlertHandler;
    void /* unknown type, empty encoding */ spotter;
    void /* unknown type, empty encoding */ enrollmentReceiver;
    void /* unknown type, empty encoding */ avsBundleDonorID;
    void /* unknown type, empty encoding */ isContinuitySessionActive;
    void /* unknown type, empty encoding */ continuityObserver;
}

@property (nonatomic, copy) id /* block */ displayAlertHandler;

+ (id)sharedInstance;

- (void)startListening;
- (void)stopListening;
- (void).cxx_destruct;
- (id)init;
- (void)resumeListening;
- (void)handleAudioBufferInput:(id)a0 time:(unsigned long long)a1;
- (void)keywordSpotterDidDetectKeywordWithEvent:(id)a0;
- (void)keywordSpotterDidUpdateScoresWithVerboseLog:(id)a0;
- (void)pauseListening;

@end
