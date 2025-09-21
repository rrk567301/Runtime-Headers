@interface AVSTriggerController : NSObject <VoiceActions.VAKeywordSpotterDelegate> {
    void /* unknown type, empty encoding */ audioProvider;
    void /* function */ displayAlertHandler;
    void /* unknown type, empty encoding */ spotter;
    void /* unknown type, empty encoding */ enrollmentReceiver;
    void /* unknown type, empty encoding */ avsBundleDonorID;
}

@property (nonatomic, copy) id /* block */ displayAlertHandler;

+ (id)sharedInstance;

- (void)stopListening;
- (void)startListening;
- (id)init;
- (void).cxx_destruct;
- (void)resumeListening;
- (void)handleAudioBufferInput:(id)a0 time:(unsigned long long)a1;
- (void)keywordSpotterDidDetectKeywordWithEvent:(id)a0;
- (void)keywordSpotterDidUpdateScoresWithVerboseLog:(id)a0;
- (void)pauseListening;

@end
