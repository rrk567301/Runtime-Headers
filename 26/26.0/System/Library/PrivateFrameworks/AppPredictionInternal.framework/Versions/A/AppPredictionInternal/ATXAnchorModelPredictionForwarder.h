@class ATXModeAnchorModelSuggestionClient, NSString, ATXAnchorModelHyperParameters, ATXProactiveSuggestionClientModel;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol> {
    id<ATXAnchorModelDataStoreWrapperProtocol> _storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    ATXModeAnchorModelSuggestionClient *_modeSuggestionClient;
}

@property (retain, nonatomic) ATXProactiveSuggestionClientModel *anchorModelClientModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientModelId;
- (id)appAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (void)forwardPredictionTuplesToBlendingLayer:(id)a0 feedbackMetadata:(id)a1;
- (id)clientModelSpec;
- (id)modeAnchorModelSuggestionsFromPredictions:(id)a0;
- (id)init;
- (void)forwardModePredictions:(id)a0;
- (id)linkActionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (id)actionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (id)initWithAnchorModelDataStoreWrapper:(id)a0 anchorModelHyperParameters:(id)a1;
- (void)forwardPredictions:(id)a0;
- (void)forwardNonModePredictions:(id)a0;
- (void).cxx_destruct;

@end
