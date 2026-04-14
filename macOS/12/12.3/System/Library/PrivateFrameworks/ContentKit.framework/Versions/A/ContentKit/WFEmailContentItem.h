@class WFEmail;

@interface WFEmailContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFEmail *email;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;

@end
