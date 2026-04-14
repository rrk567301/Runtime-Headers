@interface HMDACWGUtilities : HMFObject

+ (id)createGroupResolvingKey;
+ (id)createIssuerKeyV2KeychainItemWithKeyPairExternalRepresentation:(id)a0 generationCounter:(unsigned long long)a1 homeUUID:(id)a2 dateProvider:(id)a3 accountIdentifier:(id)a4 idsIdentifier:(id)a5;
+ (id)createLabelFromDate:(id)a0 idsIdentifier:(id)a1;
+ (id)findWinningIssuerKeyForHomeUUID:(id)a0 withKeys:(id)a1 accountIdentifier:(id)a2;
+ (id)keyPairExternalRepresentationFromKeychainItem:(id)a0;
+ (id)keychainIdentifierForPublicKeyExternalRepresentation:(id)a0;

@end
