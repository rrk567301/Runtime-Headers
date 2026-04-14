@class WFLinkMetadata, LNEntity;

@interface WFLinkMetadataContentItem : WFContentItem

@property (class, readonly, nonatomic) Class entityContentItemClass;

@property (readonly, nonatomic) WFLinkMetadata *linkMetadata;
@property (readonly, nonatomic) LNEntity *linkMetadataValue;

+ (id)coercions;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringCoercionHandler;
+ (id)urlCoercionHandler;

- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;

@end
