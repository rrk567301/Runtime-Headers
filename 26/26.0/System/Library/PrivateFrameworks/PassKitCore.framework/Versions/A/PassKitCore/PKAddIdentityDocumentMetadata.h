@class PKAddPassMetadataPreview;

@interface PKAddIdentityDocumentMetadata : PKIdentityDocumentMetadata

@property (readonly, nonatomic) PKAddPassMetadataPreview *preview;

+ (BOOL)supportsSecureCoding;

- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardTemplateIdentifier:(id)a2 issuingCountryCode:(id)a3 documentType:(long long)a4 preview:(id)a5;

@end
