@interface WFLinkCreateEntityAction : WFLinkEntityAction

- (id)verb;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)overrideLabelsByParameter;
- (Class)overrideTypeDescriptions;
- (BOOL)shouldOverrideParameterLabels;

@end
