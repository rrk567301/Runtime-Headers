@class CCToolKitToolTypedValuePrimitiveValueDecimalMantissa;

@interface CCToolKitToolTypedValuePrimitiveValueDecimal : CCItemMessage

@property (readonly, nonatomic) unsigned int sign;
@property (readonly, nonatomic) int exponent;
@property (nonatomic) char hasExponent;
@property (readonly, nonatomic) char isCompact;
@property (nonatomic) char hasIsCompact;
@property (readonly, nonatomic) unsigned int length;
@property (nonatomic) char hasLength;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDecimalMantissa *mantissa;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSign:(unsigned int)a0 exponent:(id)a1 isCompact:(id)a2 length:(id)a3 mantissa:(id)a4 error:(id *)a5;

@end
