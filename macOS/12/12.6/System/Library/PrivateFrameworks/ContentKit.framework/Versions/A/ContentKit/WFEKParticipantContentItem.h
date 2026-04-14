@class WFParticipant;

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFParticipant *participant;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)countDescription;
+ (id)possibleStatuses;
+ (id)possibleRoles;

- (id)role;
- (id)status;
- (BOOL)isCurrentUser;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateContact;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
