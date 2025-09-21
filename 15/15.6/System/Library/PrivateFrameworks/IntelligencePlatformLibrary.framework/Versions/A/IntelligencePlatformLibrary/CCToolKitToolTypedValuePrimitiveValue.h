@class NSData, NSString, CCToolKitToolTypedValuePrimitiveValuePaymentMethod, CCToolKitToolTypedValuePrimitiveValueMeasurement, CCToolKitToolTimestamp, CCToolKitToolTypedValuePrimitiveValuePlacemark, CCToolKitToolTypedValuePrimitiveValueDecimal, CCToolKitToolTypedValuePrimitiveValueFile, CCToolKitToolTypedValuePrimitiveValueApp, CCToolKitToolTypedValuePrimitiveValueDateComponents, CCToolKitToolTypedValuePrimitiveValueCurrencyAmount, CCToolKitToolTypedValuePrimitiveValuePerson;

@interface CCToolKitToolTypedValuePrimitiveValue : CCItemMessage

@property (readonly, nonatomic) unsigned int noneVariant;
@property (readonly, nonatomic) char boolType;
@property (nonatomic) char hasBoolType;
@property (readonly, nonatomic) long long intType;
@property (nonatomic) char hasIntType;
@property (readonly, nonatomic) double number;
@property (nonatomic) char hasNumber;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDecimal *decimal;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) CCToolKitToolTimestamp *date;
@property (readonly, nonatomic) NSData *dateComponents;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSData *attributedString;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueMeasurement *measurement;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePaymentMethod *paymentMethod;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePlacemark *placemark;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePerson *person;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueFile *file;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueApp *app;
@property (readonly, nonatomic) NSData *searchableItem;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValueDateComponents *encodedDateComponents;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
