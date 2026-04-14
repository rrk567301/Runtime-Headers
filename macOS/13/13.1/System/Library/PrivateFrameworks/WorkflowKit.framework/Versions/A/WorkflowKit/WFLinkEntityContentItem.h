@class LNDisplayRepresentation, NSString, LNEntity, LNQueryMetadata, LNEntityMetadata;

@interface WFLinkEntityContentItem : WFContentItem

@property (class, readonly, nonatomic) LNEntityMetadata *entityMetadata;
@property (class, readonly, nonatomic) LNQueryMetadata *queryMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;

@property (readonly, nonatomic) LNEntity *entity;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)typeDescription;
+ (id)allProperties;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (BOOL)hasLibrary;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (BOOL)hasInMemoryFindAction;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)a0 objectClass:(Class)a1 operators:(id)a2;
+ (BOOL)isNotes;
+ (BOOL)isNoteEntity;
+ (BOOL)isNoteFolderEntityIdentifier:(id)a0;

- (id)name;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForKeyedArchiver;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)copyStateToItem:(id)a0;
- (Class)classForCopying;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
