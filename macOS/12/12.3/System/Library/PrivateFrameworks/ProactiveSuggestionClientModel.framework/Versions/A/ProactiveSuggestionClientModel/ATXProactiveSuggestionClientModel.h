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

+ (id)clientModelIdFromClientModelType:(long long)a0;
+ (id)clientModelIdsFromClientModelTypesArray:(id)a0;
+ (long long)clientModelTypeFromClientModelId:(id)a0;
+ (BOOL)clientModelTypeIsShortcutConversion:(long long)a0;
+ (void)refreshBlendingLayer;
+ (BOOL)clientModelTypeIsEligibleForShortcutConversion:(long long)a0;
+ (long long)actionConversionTypeForClientModelType:(long long)a0;
+ (void)refreshBlendingLayerWithReason:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)suggestionsForInteractionSuggestionRequest:(id)a0 reply:(id /* block */)a1;
- (void)suggestionsForContextualActionSuggestionRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithClientModelId:(id)a0 requestDelegate:(id)a1;
- (id)initWithClientModelId:(id)a0 blendingLayerServer:(id)a1;
- (id)blendingLayerServer;
- (void)updateSuggestions:(id)a0;
- (void)updateSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)a0;
- (void)setupRemoteClientXPCConnection;
- (id)remoteAsyncBlendingLayerServer;
- (void)setupXPCListenerWithClientModelId:(id)a0;
- (id)initWithClientModelId:(id)a0 requestDelegate:(id)a1 blendingLayerServer:(id)a2;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)transmitSuggestionsToReceiver:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)emptyResponseForRequest:(id)a0;
- (id)initWithClientModelId:(id)a0 notificationId:(id)a1;
- (id)initWithClientModelId:(id)a0 notificationId:(id)a1 blendingLayerServer:(id)a2;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1;

@end
