@interface WFLinkDocumentsFavoriteEntityAction : WFLinkFavoriteEntityAction

- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (id)parameterOverrides;
- (id)overrideName;
- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 completionHandler:(id /* block */)a2;

@end
