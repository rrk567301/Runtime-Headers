@interface WFFolderContentItem : WFGenericFileContentItem

+ (id)contentCategories;
+ (id)contentsPropertyBuilder;
+ (id)countDescription;
+ (BOOL)includesHiddenFiles;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;

- (id)defaultSourceForRepresentation:(id)a0;

@end
