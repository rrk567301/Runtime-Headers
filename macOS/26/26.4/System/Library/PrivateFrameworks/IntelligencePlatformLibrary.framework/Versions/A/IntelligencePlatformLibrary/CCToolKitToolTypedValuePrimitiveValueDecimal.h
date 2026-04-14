@class CCToolKitToolTypedValuePrimitiveValueDecimalMantissa;

@interface CCToolKitToolTypedValuePrimitiveValueDecimal : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int sign;
@property (readonly, nonatomic) int exponent;
@property (nonatomic) BOOL hasExponent;
@property (readonly, nonatomic) BOOL isCompact;
@property (nonatomic) BOOL hasIsCompact;
@property (readonly, nonatomic) unsigned int length;
@property (nonatomic) BOOL hasLength;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDecimalMantissa *mantissa;

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
- (id)initWithSign:(unsigned int)a0 exponent:(id)a1 isCompact:(id)a2 length:(id)a3 mantissa:(id)a4 error:(id *)a5;

@end
