@class NSString;

@interface CCToolKitToolTypedValuePrimitiveValuePersonNameComponentsPhoneticRepresentation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;

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
- (id)initWithNamePrefix:(id)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 nameSuffix:(id)a4 nickname:(id)a5 error:(id *)a6;

@end
