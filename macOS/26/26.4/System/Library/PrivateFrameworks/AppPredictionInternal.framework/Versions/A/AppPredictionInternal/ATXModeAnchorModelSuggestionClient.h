@class _PASXPCClientHelper;

@interface ATXModeAnchorModelSuggestionClient : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (id)_init;
- (void)anchorModelDidProvideModeSuggestions:(id)a0;
- (void)_pingServer;
- (void).cxx_destruct;
- (id)init;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;

@end
