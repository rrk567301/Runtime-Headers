@class CCToolKitToolTriggerDefinitionVersion1FlagsRepeatedEnum, NSString, NSArray, CCToolKitToolTypeInstance;

@interface CCToolKitToolTriggerDefinitionVersion1 : CCItemMessage

@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *outputType;
@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) CCToolKitToolTriggerDefinitionVersion1FlagsRepeatedEnum *flags;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithId:(id)a0 name:(id)a1 description:(id)a2 parameters:(id)a3 outputType:(id)a4 requirements:(id)a5 flags:(id)a6 error:(id *)a7;

@end
