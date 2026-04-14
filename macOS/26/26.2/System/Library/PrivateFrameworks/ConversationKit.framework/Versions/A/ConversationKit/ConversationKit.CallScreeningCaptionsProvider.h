@interface ConversationKit.CallScreeningCaptionsProvider : NSObject <TUCaptionsClientDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ participantCaptionsProviderDelegate;
    void /* unknown type, empty encoding */ captionsClient;
    void /* unknown type, empty encoding */ lowConfidenceThreshold;
    void /* unknown type, empty encoding */ uniqueProxyIdentifier;
    void /* unknown type, empty encoding */ captionsEnabled;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)captionsClient:(id)a0 didDetectGibberish:(BOOL)a1;
- (void)captionsClient:(id)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didUpdateCaptions:(id)a1;

@end
