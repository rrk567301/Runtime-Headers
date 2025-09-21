@interface CallIntelligence.CaptionProvider : NSObject <AVCCaptionsClientDelegate> {
    void /* unknown type, empty encoding */ useCharacterCountCriteria;
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ eventStreamContinuation;
    void /* unknown type, empty encoding */ captionMutex;
    void /* unknown type, empty encoding */ captionClientFactory;
    void /* unknown type, empty encoding */ config;
}

- (id)init;
- (void).cxx_destruct;
- (void)captionsClient:(id)a0 didDetectGibberish:(BOOL)a1;
- (void)captionsClient:(id)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didProduceLanguageHypothesis:(id)a1;
- (void)captionsClient:(id)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didStopLanguageDetectorWithError:(id)a1;
- (void)captionsClient:(id)a0 didUpdateCaptions:(id)a1 source:(int)a2;
- (void)captionsServerDidDie:(id)a0;

@end
