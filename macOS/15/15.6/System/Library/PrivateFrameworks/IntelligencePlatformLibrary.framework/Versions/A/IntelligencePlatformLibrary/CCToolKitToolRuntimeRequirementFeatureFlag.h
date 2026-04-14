@class NSString;

@interface CCToolKitToolRuntimeRequirementFeatureFlag : CCItemMessage

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *feature;
@property (readonly, nonatomic) BOOL value;
@property (nonatomic) BOOL hasValue;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(id)a2 error:(id *)a3;

@end
