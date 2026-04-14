@class NSArray, CCToolKitToolTypeDisplayRepresentation, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypeDefinitionVersion1Enumeration : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *identifier;
@property (readonly, nonatomic) NSArray *cases;
@property (readonly, nonatomic) NSArray *runtimeRequirements;
@property (readonly, nonatomic) CCToolKitToolTypeDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) unsigned int kind;
@property (readonly, nonatomic) NSArray *systemProtocols;

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
- (id)initWithIdentifier:(id)a0 cases:(id)a1 runtimeRequirements:(id)a2 displayRepresentation:(id)a3 kind:(unsigned int)a4 systemProtocols:(id)a5 error:(id *)a6;

@end
