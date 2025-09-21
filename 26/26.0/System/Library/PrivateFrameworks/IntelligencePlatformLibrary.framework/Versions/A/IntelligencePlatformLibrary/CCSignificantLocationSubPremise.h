@class NSString;

@interface CCSignificantLocationSubPremise : CCItemMessage

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *value;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(unsigned int)a0 value:(id)a1 error:(id *)a2;

@end
