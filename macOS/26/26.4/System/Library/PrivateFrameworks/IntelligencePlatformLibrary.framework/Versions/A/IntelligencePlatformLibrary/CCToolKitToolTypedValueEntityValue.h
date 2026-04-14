@class NSString, NSArray, CCToolKitToolTypeIdentifier, CCToolKitToolDisplayRepresentation, NSData;

@interface CCToolKitToolTypedValueEntityValue : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) NSData *hydratedAppEntity;
@property (readonly, nonatomic) NSData *siriKitEntity;

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
- (id)initWithType:(id)a0 identifier:(id)a1 properties:(id)a2 displayRepresentation:(id)a3 hydratedAppEntity:(id)a4 siriKitEntity:(id)a5 error:(id *)a6;

@end
