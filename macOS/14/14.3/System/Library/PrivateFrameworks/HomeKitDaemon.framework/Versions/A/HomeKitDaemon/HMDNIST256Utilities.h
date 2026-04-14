@interface HMDNIST256Utilities : HMFObject

+ (id)createRandomKey;
+ (id)identifier16BytesForKey:(id)a0;
+ (id)privateKeyFromKeyPairExternalRepresentation:(id)a0;
+ (id)publicKeyExternalRepresentationFromKeyPairExternalRepresentation:(id)a0;

@end
