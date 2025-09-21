@class NSString, NSData;

@interface CCToolKitToolAny : CCItemMessage

@property (readonly, nonatomic) NSString *typeUrl;
@property (readonly, nonatomic) NSData *value;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTypeUrl:(id)a0 value:(id)a1 error:(id *)a2;

@end
