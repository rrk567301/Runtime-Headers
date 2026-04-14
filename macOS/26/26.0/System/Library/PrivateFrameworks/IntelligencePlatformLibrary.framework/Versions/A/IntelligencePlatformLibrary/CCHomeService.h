@class NSString;

@interface CCHomeService : CCItemMessage

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int deviceType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 deviceType:(unsigned int)a1 error:(id *)a2;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
