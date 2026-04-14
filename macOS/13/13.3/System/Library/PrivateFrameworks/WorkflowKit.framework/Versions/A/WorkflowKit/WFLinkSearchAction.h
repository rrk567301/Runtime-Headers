@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;

@end
