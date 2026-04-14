@class NSString, RMModelAppManagedDeclaration_ExtensionConfigs, NSSet, RMModelAppManagedDeclaration_UpdateBehavior, RMModelAppManagedDeclaration_Attributes, RMModelAppManagedDeclaration_InstallBehavior, RMModelAppManagedDeclaration_AppConfigDictionary, NSNumber;

@interface RMModelAppManagedDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadAppStoreID;
@property (copy, nonatomic) NSString *payloadBundleID;
@property (copy, nonatomic) NSString *payloadManifestURL;
@property (copy, nonatomic) NSString *payloadAppComposedIdentifier;
@property (copy, nonatomic) NSNumber *payloadIOSApp;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehavior *payloadInstallBehavior;
@property (copy, nonatomic) RMModelAppManagedDeclaration_UpdateBehavior *payloadUpdateBehavior;
@property (copy, nonatomic) NSNumber *payloadIncludeInBackup;
@property (copy, nonatomic) RMModelAppManagedDeclaration_Attributes *payloadAttributes;
@property (copy, nonatomic) RMModelAppManagedDeclaration_AppConfigDictionary *payloadAppConfig;
@property (copy, nonatomic) RMModelAppManagedDeclaration_ExtensionConfigs *payloadExtensionConfigs;
@property (copy, nonatomic) NSString *payloadLegacyAppConfigAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 appStoreID:(id)a1 bundleID:(id)a2 manifestURL:(id)a3 appComposedIdentifier:(id)a4 iosApp:(id)a5 installBehavior:(id)a6 updateBehavior:(id)a7 includeInBackup:(id)a8 attributes:(id)a9 appConfig:(id)a10 extensionConfigs:(id)a11 legacyAppConfigAssetReference:(id)a12;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
