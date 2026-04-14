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
+ (BOOL)hasLibrary;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (BOOL)isNotes;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)a0 objectClass:(Class)a1 operators:(id)a2;
+ (BOOL)hasInMemoryFindAction;
+ (BOOL)isNoteEntity;
+ (BOOL)isNoteFolderEntityIdentifier:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (Class)classForCopying;
- (void)copyStateToItem:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
