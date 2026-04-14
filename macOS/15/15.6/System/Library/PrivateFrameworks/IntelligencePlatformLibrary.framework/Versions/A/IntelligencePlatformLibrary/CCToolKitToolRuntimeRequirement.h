@class CCToolKitToolRuntimeRequirementDeviceCapability, CCToolKitToolRuntimeRequirementFeatureFlag, CCToolKitToolRuntimeRequirementAvailabilityAnnotation;

@interface CCToolKitToolRuntimeRequirement : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolRuntimeRequirementAvailabilityAnnotation *platform;
@property (readonly, nonatomic) CCToolKitToolRuntimeRequirementDeviceCapability *deviceCapability;
@property (readonly, nonatomic) CCToolKitToolRuntimeRequirementFeatureFlag *featureFlag;
@property (readonly, nonatomic) unsigned int deviceState;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
