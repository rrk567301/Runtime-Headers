@interface WFLinkChangeBinarySettingAction : WFOverridableLinkAction

- (id)overrideParameterSummary;
- (id)overrideDefaultValuesByParameter;
- (id)overrideLabelsByParameter;
- (BOOL)shouldOverrideParameterLabels;

@end
