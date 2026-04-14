@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (id)verb;
- (Class)contentItemClass;
- (id)parameterSummary;
- (BOOL)deletesInput;
- (id)entityParameterName;
- (id)itemsBeingDeleted;
- (id)overrideEntityName;
- (id)overrideLabelsByParameter;

@end
