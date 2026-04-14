@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideName;
- (id)overrideLabelsByParameter;

@end
