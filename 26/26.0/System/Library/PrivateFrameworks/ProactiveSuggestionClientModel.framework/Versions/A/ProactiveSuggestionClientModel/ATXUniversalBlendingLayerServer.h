@class ATXUniversalBlendingLayer, NSString, ATXUniversalBlendingFeedbackWriter, _PASLock, ATXUniversalRealTimeSuggestionRequestCoordinator, NSObject, NSXPCListener, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue, ATXClientModelNotificationManagerProtocol, ATXBlendingLayerServerDelegateProtocol, ATXEngagementRecordManagerProtocol, ATXClientModelCacheManagerProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXUniversalBlendingLayerServer : NSObject <ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate> {
    _PASLock *_pendingRefreshTrackerLock;
    id<ATXClientModelNotificationManagerProtocol> _clientModelNotificationManager;
    id<ATXBlendingLayerServerDelegateProtocol> _serverDelegate;
    id<ATXEngagementRecordManagerProtocol> _engagementRecordsManager;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
    ATXUniversalRealTimeSuggestionRequestCoordinator *_realTimeSuggestionRequestCoordinator;
    ATXUniversalBlendingFeedbackWriter *_feedbackWriter;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _blendingDarwinNotificationObserver;
    NSXPCListener *_xpcListener;
}

@property (readonly, nonatomic) ATXUniversalBlendingLayer *blendingLayer;
@property (readonly, nonatomic) id<ATXClientModelCacheManagerProtocol> clientModelCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshBlendingLayer;
- (void)generateLayoutForRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)refreshBlendingLayerIfNeededForNewSuggestions:(id)a0 previousCacheUpdate:(id)a1 clientModelId:(id)a2;
- (id)initWithBlendingLayer:(id)a0 engagementRecordsManager:(id)a1 hyperParameters:(id)a2 clientModelCacheManager:(id)a3 clientModelNotificationManager:(id)a4 serverDelegate:(id)a5 pendingRefreshTracker:(id)a6;
- (void)start;
- (void)dealloc;
- (void)setupXPCListener;
- (void)registerRealTimeSuggestionProviderDelegate:(id)a0 clientModelId:(id)a1;
- (void)updateClientModelCacheWithCacheUpdate:(id)a0 previousCacheUpdate:(id)a1 completion:(id /* block */)a2;
- (void)clientModelUpdatedSuggestions:(id)a0 feedbackMetadata:(id)a1 clientModelId:(id)a2 completion:(id /* block */)a3;
- (id)initWithBlendingLayer:(id)a0 engagementRecordsManager:(id)a1 hyperParameters:(id)a2 serverDelegate:(id)a3;
- (id)consumerSubTypesToRefreshGivenUpdatesFromClientModels:(id)a0;
- (id)clientModelsThatUpdatedSuggestionsRecently;
- (void)generateRankedSuggestionsForRequest:(id)a0 limit:(id)a1 reply:(id /* block */)a2;
- (id)generatedRankedSuggestionsForSuggestionRequest:(id)a0 limit:(id)a1;
- (BOOL)willForceRefreshOfAllUIs;
- (void)clientModelUpdatedNotificationId:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)retrieveSuggestionsForClientModelId:(id)a0 reply:(id /* block */)a1;
- (id)selectedLayoutForSuggestionRequest:(id)a0;
- (void).cxx_destruct;
- (void)coalescedBlendingLayerRefresh;

@end
