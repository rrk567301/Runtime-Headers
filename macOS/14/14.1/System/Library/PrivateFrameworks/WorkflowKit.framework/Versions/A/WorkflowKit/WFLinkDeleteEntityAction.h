@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (id)verb;
- (Class)contentItemClass;
- (id)overrideDescriptionSummary;
- (BOOL)deletesInput;
- (id)entityParameterName;
- (id)itemsBeingDeleted;
- (id)overrideEntityName;
- (id)overrideLabelsByParameter;

@end
