@class NSString, _PSKNNModel, _PSKNNModelConfiguration, NSArray;

@interface _PSKNNZKWATXDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    _PSKNNModel *_knnModel;
    long long _modelType;
    _PSKNNModelConfiguration *_modelConfiguration;
    unsigned long long _maxSuggestions;
    NSArray *_transformers;
    char _isEnabled;
    long long _defaultConfidenceCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)suggestionsForInteractionSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (id /* block */)_getInteractionFilterForPrimaryInteractionsModel;
- (id)getSuggestionsWithPredictionContext:(id)a0;
- (id)initWithKNNModel:(id)a0 fallbackInteractionConfig:(id)a1;
- (id)initWithKNNModel:(id)a0 modelType:(long long)a1 modelConfiguration:(id)a2 maxSuggestions:(unsigned long long)a3 transformers:(id)a4 isEnabled:(char)a5 defaultConfidenceCategory:(long long)a6;
- (id)initWithKNNModel:(id)a0 primaryInteractionsConfig:(id)a1;
- (void)updateWithFallbackInteractionsConfig:(id)a0;
- (void)updateWithPrimaryInteractionsConfig:(id)a0;

@end
