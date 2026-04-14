@class WFEmailAddress;

@interface WFEmailAddressContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFEmailAddress *emailAddress;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemsWithTextCheckingResult:(id)a0;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListAltText:(id /* block */)a0;

@end
