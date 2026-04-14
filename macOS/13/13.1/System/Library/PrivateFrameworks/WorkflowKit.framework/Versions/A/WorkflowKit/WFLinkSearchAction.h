@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (id)parameterOverrides;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideName;
- (id)overrideLabelsByParameter;

@end
