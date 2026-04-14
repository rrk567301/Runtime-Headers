@interface WFLinkBooksChangePageNavigationAction : WFOverridableLinkAction

- (BOOL)shouldOverrideParameterLabels;
- (id)overrideLabelsByParameter;
- (id)overrideDefaultValuesByParameter;

@end
