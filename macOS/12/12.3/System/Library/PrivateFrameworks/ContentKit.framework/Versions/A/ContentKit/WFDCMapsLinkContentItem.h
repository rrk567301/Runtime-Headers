@interface WFDCMapsLinkContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)mapsLink;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)additionalRepresentationsForSerialization;
- (BOOL)includesFileRepresentationInSerializedItem;

@end
