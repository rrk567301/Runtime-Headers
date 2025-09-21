@class CCToolKitToolRuntimePlatformVersion;

@interface CCToolKitToolRuntimeRequirementAvailabilityAnnotation : CCItemMessage

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *introducingVersion;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *deprecatingVersion;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *obsoletingVersion;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPlatform:(unsigned int)a0 introducingVersion:(id)a1 deprecatingVersion:(id)a2 obsoletingVersion:(id)a3 error:(id *)a4;

@end
