@interface WFBooleanContentItem : WFNumberContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)allowedClassesForDecodingInternalRepresentations;

@end
