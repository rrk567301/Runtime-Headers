@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (id)verb;
- (id)overrideDescriptionSummary;
- (Class)contentItemClass;
- (id)itemsBeingDeleted;
- (id)overrideLabelsByParameter;
- (id)entityParameterName;
- (id)overrideEntityName;
- (BOOL)deletesInput;

@end
