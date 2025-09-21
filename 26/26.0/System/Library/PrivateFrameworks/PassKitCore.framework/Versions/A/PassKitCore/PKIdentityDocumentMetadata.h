@class NSString, PKPushProvisioningTarget, PKAddPassMetadataPreview;

@interface PKIdentityDocumentMetadata : NSObject <PKPushablePassMetadataProvider, NSCopying, NSSecureCoding> {
    PKPushProvisioningTarget *_provisioningTarget;
    PKAddPassMetadataPreview *_underlyingPreview;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSString *cardTemplateIdentifier;
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *serverEnvironmentIdentifier;
@property (readonly, nonatomic) NSString *issuingCountryCode;
@property (readonly, nonatomic) long long documentType;
@property (retain, nonatomic) PKPushProvisioningTarget *provisioningTarget;
@property (retain, nonatomic) PKAddPassMetadataPreview *underlyingPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasRequiredDataForProvisioning;
- (void)_extendableDescription:(id)a0;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardConfigurationIdentifier:(id)a2 cardTemplateIdentifier:(id)a3 requiresSimultaneousRequestRouting:(BOOL)a4 issuingCountryCode:(id)a5 documentType:(long long)a6 preview:(id)a7;
- (id)initWithPushProvisioningTarget:(id)a0 preview:(id)a1;

@end
