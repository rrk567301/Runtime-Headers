@class NSString, CCToolKitToolContainerDefinitionDevice, NSArray;

@interface CCToolKitToolContainerDefinition : CCItemMessage

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) unsigned int containerType;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) CCToolKitToolContainerDefinitionDevice *device;
@property (readonly, nonatomic) unsigned int origin;
@property (readonly, nonatomic) NSArray *synonyms;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 containerId:(id)a1 bundleVersion:(id)a2 containerType:(unsigned int)a3 teamId:(id)a4 device:(id)a5 origin:(unsigned int)a6 synonyms:(id)a7 error:(id *)a8;

@end
