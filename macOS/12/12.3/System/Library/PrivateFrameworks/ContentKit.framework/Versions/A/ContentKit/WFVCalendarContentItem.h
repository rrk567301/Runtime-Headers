@interface WFVCalendarContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
