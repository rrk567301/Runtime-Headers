@interface WFFTPDirectoryListingContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)preferredFileType;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
