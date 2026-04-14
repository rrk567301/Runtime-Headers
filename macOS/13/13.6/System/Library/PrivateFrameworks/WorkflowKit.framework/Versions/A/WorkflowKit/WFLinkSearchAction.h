@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;

@end
