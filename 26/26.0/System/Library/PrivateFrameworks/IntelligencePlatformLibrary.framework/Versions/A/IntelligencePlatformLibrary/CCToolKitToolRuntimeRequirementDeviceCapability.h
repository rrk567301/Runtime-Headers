@class CCToolKitToolRuntimeRequirementDeviceCapabilityMobileGestalt;

@interface CCToolKitToolRuntimeRequirementDeviceCapability : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolRuntimeRequirementDeviceCapabilityMobileGestalt *mobileGestalt;
@property (readonly, nonatomic) unsigned int capability;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
