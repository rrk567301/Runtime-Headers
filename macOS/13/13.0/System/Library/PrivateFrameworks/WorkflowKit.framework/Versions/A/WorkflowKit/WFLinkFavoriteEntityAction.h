@interface WFLinkFavoriteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterName;

- (id)verb;
- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideDefaultValuesByParameter;
- (id)entityParameterName;

@end
