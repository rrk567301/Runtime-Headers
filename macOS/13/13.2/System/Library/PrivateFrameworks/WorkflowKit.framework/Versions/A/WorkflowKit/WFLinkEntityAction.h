@protocol LNValueMetadata;

@interface WFLinkEntityAction : WFOverridableLinkAction

@property (readonly, nonatomic) id<LNValueMetadata> entityMetadata;

- (id)entityName;
- (id)verb;
- (id)overrideParameterSummary;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideName;
- (id)entityParameterName;
- (id)actualEntityParameterNameFromPossibleNames:(id)a0;
- (id)entityParameterMetadata;
- (Class)overrideTypeDescriptions;
- (id)overrideEntityName;
- (id)lowercaseEntityName;
- (id)capitalizedEntityName;
- (id)capitalizedVerb;

@end
