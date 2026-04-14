@interface WFLinkCreateEntityAction : WFLinkEntityAction

- (id)verb;
- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideLabelsByParameter;
- (Class)overrideTypeDescriptions;

@end
