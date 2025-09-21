@class NSString, NSData, CCToolKitToolDisplayRepresentation;

@interface CCToolKitToolTypedValueCodableValue : CCItemMessage

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 data:(id)a1 displayRepresentation:(id)a2 error:(id *)a3;

@end
