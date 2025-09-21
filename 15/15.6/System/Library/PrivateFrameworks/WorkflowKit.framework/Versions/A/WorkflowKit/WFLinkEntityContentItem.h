@class LNDisplayRepresentation, NSString, LNEntity, LNQueryMetadata, LNEntityMetadata;

@interface WFLinkEntityContentItem : WFContentItem

@property (class, readonly, nonatomic) LNEntityMetadata *entityMetadata;
@property (class, readonly, nonatomic) LNQueryMetadata *queryMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;
@property (class, readonly, nonatomic) NSString *displayedAppBundleIdentifier;

@property (readonly, nonatomic) LNEntity *entity;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (char)isNotes;
+ (id)allProperties;
+ (id)coercions;
+ (char)hasLibrary;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)propertyBuildersForFilteringUsingQuery:(id)a0;
+ (id)_localizedTypeDescriptionWithContext:(id)a0 pluralizationNumber:(long long)a1;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)a0 objectClass:(Class)a1 operators:(id)a2;
+ (id)eventCoercionHandler;
+ (char)hasInMemoryFindAction;
+ (char)isCalendarEntity;
+ (char)isNoteEntity;
+ (char)isNoteFolderEntityIdentifier:(id)a0;
+ (char)isWorkflowEntity;
+ (id)workflowCoercionHandler;

- (id)debugDescription;
- (id)name;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (Class)classForCopying;
- (void)copyStateToItem:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)generateStructuredDataRepresentationWithTypeIdentifier:(long long)a0 completionHandler:(id /* block */)a1;

@end
