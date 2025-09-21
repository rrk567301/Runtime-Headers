@class NSString, CCToolKitToolDisplayRepresentation, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypedValueEnumerationValue : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *type;
@property (readonly, nonatomic) NSString *caseValue;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 caseValue:(id)a1 displayRepresentation:(id)a2 error:(id *)a3;

@end
