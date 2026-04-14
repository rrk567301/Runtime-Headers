@class NSData, CCToolKitToolDisplayRepresentation;

@interface CCToolKitToolTypedValuePrimitiveValuePlacemark : CCItemMessage

@property (readonly, nonatomic) NSData *placemark;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPlacemark:(id)a0 displayRepresentation:(id)a1 error:(id *)a2;

@end
