@interface WFLinkChangeBinarySettingAction : WFOverridableLinkAction

- (id)parameterSummary;
- (id)overrideDefaultValuesByParameter;
- (id)overrideLabelsByParameter;
- (BOOL)shouldOverrideParameterLabels;

@end
