@interface WFLinkChangeBinarySettingAction : WFOverridableLinkAction

- (id)overrideParameterSummary;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideLabelsByParameter;
- (id)overrideDefaultValuesByParameter;

@end
