@class NSString;

@interface CCFindMyDeviceOwner : CCItemMessage

@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 error:(id *)a2;

@end
