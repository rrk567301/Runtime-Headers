@interface WFLinkCreateEntityAction : WFLinkEntityAction

- (id)verb;
- (id)overrideLabelsByParameter;
- (Class)overrideTypeDescriptions;
- (BOOL)shouldOverrideParameterLabels;

@end
