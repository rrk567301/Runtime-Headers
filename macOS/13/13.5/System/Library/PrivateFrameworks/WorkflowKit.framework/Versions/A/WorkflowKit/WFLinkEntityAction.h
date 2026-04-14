@protocol LNValueMetadata;

@interface WFLinkEntityAction : WFOverridableLinkAction

@property (readonly, nonatomic) id<LNValueMetadata> entityMetadata;

- (id)entityName;
- (id)verb;
- (id)overrideParameterSummary;
- (id)capitalizedVerb;
- (id)actualEntityParameterNameFromPossibleNames:(id)a0;
- (id)capitalizedEntityName;
- (id)entityParameterMetadata;
- (id)entityParameterName;
- (id)lowercaseEntityName;
- (id)overrideEntityName;
- (id)overrideName;
- (Class)overrideTypeDescriptions;
- (BOOL)shouldOverrideParameterLabels;

@end
