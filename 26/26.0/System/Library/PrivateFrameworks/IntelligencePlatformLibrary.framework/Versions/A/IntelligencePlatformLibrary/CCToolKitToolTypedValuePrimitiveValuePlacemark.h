@class NSData, CCToolKitToolDisplayRepresentation;

@interface CCToolKitToolTypedValuePrimitiveValuePlacemark : CCItemMessage

@property (readonly, nonatomic) NSData *placemark;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) unsigned int type;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPlacemark:(id)a0 displayRepresentation:(id)a1 type:(unsigned int)a2 error:(id *)a3;

@end
