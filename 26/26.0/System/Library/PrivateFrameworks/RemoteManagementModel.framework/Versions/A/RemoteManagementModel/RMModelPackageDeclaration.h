@class NSSet, NSString, RMModelPackageDeclaration_RepairBehavior, RMModelPackageDeclaration_UninstallBehavior, RMModelPackageDeclaration_InstallBehavior;

@interface RMModelPackageDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadManifestURL;
@property (copy, nonatomic) RMModelPackageDeclaration_InstallBehavior *payloadInstallBehavior;
@property (copy, nonatomic) RMModelPackageDeclaration_RepairBehavior *payloadRepairBehavior;
@property (copy, nonatomic) RMModelPackageDeclaration_UninstallBehavior *payloadUninstallBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 manifestURL:(id)a1;
+ (id)buildWithIdentifier:(id)a0 manifestURL:(id)a1 installBehavior:(id)a2 repairBehavior:(id)a3 uninstallBehavior:(id)a4;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
