@class NSString;

@interface CCContactInstantMessageAddress : CCItemMessage

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *serviceName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLabel:(id)a0 username:(id)a1 serviceName:(id)a2 error:(id *)a3;

@end
