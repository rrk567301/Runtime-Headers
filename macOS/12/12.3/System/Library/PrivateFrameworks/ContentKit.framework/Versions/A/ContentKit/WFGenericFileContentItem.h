@interface WFGenericFileContentItem : WFContentItem <WFContentItemClass>

+ (id)ownedTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)contentCategories;

- (BOOL)isContent;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;

@end
