@class NSSet, NSString, CEMSystemAllowedMediaDeclaration_MediaItems;

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadLogoutEject;
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadMountControls;
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadUnmountControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withLogoutEject:(id)a1 withMountControls:(id)a2 withUnmountControls:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
