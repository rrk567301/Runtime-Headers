@interface SiriSuggestionsAPI.ContinuationBasedXPCBridge : NSObject <SiriSuggestionsAPI.XPCClientBridge> {
    void /* unknown type, empty encoding */ baseBridge;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendSuggestionsWithSuggestions:(id)a0;
- (void)connectionErrorWithError:(id)a0;
- (void)finalise;

@end
