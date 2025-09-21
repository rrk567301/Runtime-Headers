@interface MAThirdPartyCompatibility : NSObject

+ (char)__addTrustedSigningCertificateAuthority:(id)a0;
+ (id)_thirdPartyAssetTypeStorage;
+ (char)addTrustedSigningCertificateAuthority:(id)a0;
+ (char)clearAllTrustedSigningCertificateAuthorities;
+ (id)compatibilityVersionForAssetType:(id)a0;
+ (id)compatibilityVersionStringForAssetType:(id)a0;
+ (id)defaultThirdPartyServerURLForAssetType:(id)a0;
+ (char)isThirdPartyAssetType:(id)a0;
+ (char)permitThirdPartySigningForAssetType:(id)a0 outOrganizations:(id *)a1;

@end
