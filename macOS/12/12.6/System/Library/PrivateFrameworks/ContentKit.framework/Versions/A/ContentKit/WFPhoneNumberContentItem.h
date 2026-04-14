@class WFPhoneNumber;

@interface WFPhoneNumberContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)richListTitle;
- (BOOL)getListAltText:(id /* block */)a0;

@end
