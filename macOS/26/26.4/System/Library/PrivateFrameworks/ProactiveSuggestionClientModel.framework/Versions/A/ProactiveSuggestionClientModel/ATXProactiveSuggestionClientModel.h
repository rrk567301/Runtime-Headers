@class NSString, NSXPCListener, NSXPCConnection;
@protocol ATXProactiveSuggestionClientModelXPCInterface, ATXProactiveSuggestionRealTimeProviderDelegateProtocol;

@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol, ATXProactiveSuggestionRealTimeProviderDelegateProtocol, NSXPCListenerDelegate> {
    NSString *_clientModelId;
    id<ATXProactiveSuggestionRealTimeProviderDelegateProtocol> _requestDelegate;
    id<ATXProactiveSuggestionClientModelXPCInterface> _blendingLayerServer;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
}

@property (readonly, nonatomic) id<ATXProactiveSuggestionClientModelXPCInterface> suggestionReceiver;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)clientModelTypeIsEligibleForShortcutConversion:(long long)a0;
+ (id)clientModelIdFromClientModelType:(long long)a0;
+ (long long)clientModelTypeFromClientModelId:(id)a0;
+ (long long)actionConversionTypeForClientModelType:(long long)a0;
+ (BOOL)clientModelTypeIsShortcutConversion:(long long)a0;
+ (void)refreshBlendingLayer;
+ (id)clientModelIdsFromClientModelTypesArray:(id)a0;
+ (void)refreshBlendingLayerWithReason:(id)a0;

- (void)suggestionsForIntentSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (void)setupXPCListenerWithClientModelId:(id)a0;
- (id)emptyResponseForRequest:(id)a0;
- (id)initWithClientModelId:(id)a0 blendingLayerServer:(id)a1;
- (void)pingWithCompletion:(id /* block */)a0;
- (id)initWithClientModelId:(id)a0 notificationId:(id)a1;
- (void)updateSuggestions:(id)a0;
- (void)suggestionsForInteractionSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (id)clientModelMismatchErrorResponseForRequest:(id)a0 clientModelId:(id)a1;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithClientModelId:(id)a0 requestDelegate:(id)a1 blendingLayerServer:(id)a2;
- (void).cxx_destruct;
- (id)initWithClientModelId:(id)a0 notificationId:(id)a1 blendingLayerServer:(id)a2;
- (void)suggestionsForContextualActionSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (void)transmitSuggestionsToReceiver:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)a0;
- (id)initWithClientModelId:(id)a0 requestDelegate:(id)a1;
- (id)blendingLayerServer;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRemoteClientXPCConnection;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1;
- (id)remoteAsyncBlendingLayerServer;
- (void)dealloc;

@end
