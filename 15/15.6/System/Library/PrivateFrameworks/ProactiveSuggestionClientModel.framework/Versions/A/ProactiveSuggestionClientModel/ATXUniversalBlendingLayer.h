@class NSString, NSDictionary, ATXUniversalBlendingFeedbackWriter;
@protocol ATXSuggestionPreprocessorProtocol, ATXUniversalBlendingLayerHyperParametersProtocol, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerSessionLoggerProtocol;

@interface ATXUniversalBlendingLayer : NSObject {
    NSString *_promotedClientModelId;
    id<ATXSuggestionPreprocessorProtocol> _suggestionPreprocessor;
    id<ATXBlendingLayerDelegateProtocol> _delegate;
    NSDictionary *_layoutSelectorsForConsumerSubTypes;
    id<ATXBlendingLayerSessionLoggerProtocol> _blendingSessionLogger;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
}

@property (readonly, nonatomic) ATXUniversalBlendingFeedbackWriter *feedbackWriter;

+ (void)logLongDescriptionForBlendingLayerString:(id)a0 prefix:(id)a1 shouldUseDefaultLogLevel:(char)a2 limit:(unsigned long long)a3;
+ (id)validConsumerSubTypesForLayoutGeneration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestionPreprocessor:(id)a0 delegate:(id)a1 layoutSelectorsForConsumerSubTypes:(id)a2 blendingSessionLogger:(id)a3 hyperParameters:(id)a4;
- (void)promoteSuggestionsFromClientModelWithIdentifier:(id)a0;
- (id)rerankedValidSuggestionsFromClientModelSuggestions:(id)a0;
- (void)updateSuggestionsForAllConsumerSubTypesWithClientModelSuggestions:(id)a0;
- (id)rerankedSuggestions:(id)a0;
- (id)selectedLayoutForUIConsumer:(unsigned char)a0 rankedSuggestions:(id)a1;
- (char)updateCachedLayout:(id)a0 uiConsumer:(unsigned char)a1 clientModelSuggestions:(id)a2;
- (char)updateSuggestionsForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1 clientModelSuggestions:(id)a2;
- (void)updateSuggestionsForConsumerSubTypes:(id)a0 clientModelSuggestions:(id)a1;

@end
