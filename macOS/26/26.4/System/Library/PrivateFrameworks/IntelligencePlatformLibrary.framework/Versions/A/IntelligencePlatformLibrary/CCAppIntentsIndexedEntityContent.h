@class CCSpotlightDefinedAttributes, NSArray, NSString, CCAppEntityTypeDisplayRepresentation, CCAppEntityDisplayRepresentation;

@interface CCAppIntentsIndexedEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSArray *assistantDefinedSchemas;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) CCAppEntityDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) CCAppEntityTypeDisplayRepresentation *typeDisplayRepresentation;
@property (readonly, nonatomic) CCSpotlightDefinedAttributes *definedAttributes;
@property (readonly, nonatomic) NSArray *customAttributes;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithTypeIdentifier:(id)a0 displayRepresentation:(id)a1 typeDisplayRepresentation:(id)a2 assistantDefinedSchemas:(id)a3 definedAttributes:(id)a4 customAttributes:(id)a5 error:(id *)a6;
- (id)initWithTypeIdentifier:(id)a0 displayRepresentation:(id)a1 typeDisplayRepresentation:(id)a2 assistantDefinedSchemas:(id)a3 error:(id *)a4;
- (id)initWithTypeIdentifier:(id)a0 displayRepresentation:(id)a1 typeDisplayRepresentation:(id)a2 definedAttributes:(id)a3 customAttributes:(id)a4 error:(id *)a5;
- (id)initWithTypeIdentifier:(id)a0 displayRepresentation:(id)a1 typeDisplayRepresentation:(id)a2 error:(id *)a3;

@end
