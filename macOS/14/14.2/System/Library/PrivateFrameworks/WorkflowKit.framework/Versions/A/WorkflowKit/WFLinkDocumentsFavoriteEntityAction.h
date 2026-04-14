@interface WFLinkDocumentsFavoriteEntityAction : WFLinkFavoriteEntityAction

- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)overrideName;

@end
