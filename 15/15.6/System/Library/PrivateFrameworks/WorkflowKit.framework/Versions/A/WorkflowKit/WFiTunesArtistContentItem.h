@interface WFiTunesArtistContentItem : WFiTunesObjectContentItem

+ (char)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (char)getListSubtitle:(id /* block */)a0;

@end
