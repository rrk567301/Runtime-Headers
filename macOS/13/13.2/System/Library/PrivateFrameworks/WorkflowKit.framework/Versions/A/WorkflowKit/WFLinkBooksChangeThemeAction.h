@interface WFLinkBooksChangeThemeAction : WFOverridableLinkAction

- (BOOL)shouldOverrideParameterLabels;
- (id)overrideLabelsByParameter;
- (id)overrideDefaultValuesByParameter;

@end
