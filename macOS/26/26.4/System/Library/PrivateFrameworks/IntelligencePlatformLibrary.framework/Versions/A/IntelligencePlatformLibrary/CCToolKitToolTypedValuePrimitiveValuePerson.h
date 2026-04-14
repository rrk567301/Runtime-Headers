@class CCToolKitToolTypedValuePrimitiveValuePersonNameComponents, CCToolKitToolDisplayRepresentation, NSString, NSData, CCToolKitToolTypedValuePrimitiveValuePersonHandle;

@interface CCToolKitToolTypedValuePrimitiveValuePerson : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSData *person;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePersonHandle *handle;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSData *image;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BOOL contactSuggestion;
@property (nonatomic) BOOL hasContactSuggestion;
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL hasIsMe;

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
- (id)initWithPerson:(id)a0 displayRepresentation:(id)a1 handle:(id)a2 nameComponents:(id)a3 displayName:(id)a4 image:(id)a5 contactIdentifier:(id)a6 customIdentifier:(id)a7 relationship:(id)a8 contactSuggestion:(id)a9 isMe:(id)a10 error:(id *)a11;

@end
