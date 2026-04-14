@class NSString;

@interface CCToolKitToolRestrictionContextInSetValueSetLinkQuery : CCItemMessage

@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) NSString *queryIdentifier;
@property (readonly, nonatomic) NSString *actionIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithParameterKey:(id)a0 queryIdentifier:(id)a1 actionIdentifier:(id)a2 error:(id *)a3;

@end
