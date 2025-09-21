@class NSXPCListener, NSString, ATXConfiguredModeService, _PASLock;
@protocol ATXModeClassifierClientModelDelegate;

@interface ATXModeAnchorModelSuggestionServer : NSObject <NSXPCListenerDelegate, ATXModeAnchorModelSuggestionServerXPCInterface, ATXModeAnchorModelSuggestionClientXPCInterface, ATXModeClassifierClientModel> {
    NSXPCListener *_xpcListener;
    _PASLock *_lock;
    ATXConfiguredModeService *_modeService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ATXModeClassifierClientModelDelegate> delegate;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)anchorModelDidProvideModeSuggestions:(id)a0;
- (BOOL)_shouldUpdateHighestConfidenceSuggestion:(id)a0 newSuggestion:(id)a1;
- (id)init;
- (id)initWithConfiguredModeService:(id)a0;
- (void)fetchCombinedSuggestionScoreForModeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithXPCListener:(id)a0 configuredModeService:(id)a1;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;
- (void)pingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
