@class NSString;

@interface CCToolKitToolRestrictionContextMeasurementExpressibleAs : CCItemMessage

@property (readonly, nonatomic) NSString *unit;
@property (readonly, nonatomic) BOOL unitAdjustForLocale;
@property (nonatomic) BOOL hasUnitAdjustForLocale;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (nonatomic) BOOL hasSupportsNegativeNumbers;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithUnit:(id)a0 unitAdjustForLocale:(id)a1 supportsNegativeNumbers:(id)a2 error:(id *)a3;

@end
