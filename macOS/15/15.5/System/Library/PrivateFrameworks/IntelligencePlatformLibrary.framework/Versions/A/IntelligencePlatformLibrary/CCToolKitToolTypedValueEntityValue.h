@class NSString, NSArray, CCToolKitToolTypeIdentifier, CCToolKitToolDisplayRepresentation, NSData;

@interface CCToolKitToolTypedValueEntityValue : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) NSData *hydratedAppEntity;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 identifier:(id)a1 properties:(id)a2 displayRepresentation:(id)a3 hydratedAppEntity:(id)a4 error:(id *)a5;

@end
