@class NSString;

@interface CCToolKitToolTypedValuePrimitiveValueMeasurement : CCItemMessage

@property (readonly, nonatomic) NSString *unit;
@property (readonly, nonatomic) double value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) unsigned int unitType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithUnit:(id)a0 value:(id)a1 unitType:(unsigned int)a2 error:(id *)a3;

@end
