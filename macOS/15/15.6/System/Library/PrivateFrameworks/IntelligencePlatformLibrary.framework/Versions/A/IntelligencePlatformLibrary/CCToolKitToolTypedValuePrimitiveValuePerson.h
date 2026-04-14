@class CCToolKitToolTypedValuePrimitiveValuePersonNameComponents, CCToolKitToolDisplayRepresentation, NSString, NSData, CCToolKitToolTypedValuePrimitiveValuePersonHandle;

@interface CCToolKitToolTypedValuePrimitiveValuePerson : CCItemMessage

@property (readonly, nonatomic) NSData *person;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePersonHandle *handle;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSData *image;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BOOL contactSuggestion;
@property (nonatomic) BOOL hasContactSuggestion;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPerson:(id)a0 displayRepresentation:(id)a1 handle:(id)a2 nameComponents:(id)a3 displayName:(id)a4 image:(id)a5 contactIdentifier:(id)a6 customIdentifier:(id)a7 relationship:(id)a8 contactSuggestion:(id)a9 error:(id *)a10;

@end
