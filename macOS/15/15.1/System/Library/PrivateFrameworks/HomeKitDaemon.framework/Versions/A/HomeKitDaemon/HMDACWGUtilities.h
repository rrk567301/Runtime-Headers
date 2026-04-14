@interface HMDACWGUtilities : HMFObject

+ (id)createGroupResolvingKey;
+ (id)createIssuerKeyKeychainItemWithKeyPairExternalRepresentation:(id)a0;
+ (id)keyPairExternalRepresentationFromKeychainItem:(id)a0;
+ (id)keychainIdentifierForPublicKeyExternalRepresentation:(id)a0;

@end
