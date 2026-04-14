@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id *)a0;
- (id)_legacySealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (id)_ngmSealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedWithFullIdentity:(id)a2 error:(id *)a3;
- (id)initWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usedIdentityWithIdentifier:(id *)a3 error:(id *)a4;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usingIdentitiesWithIdentifier:(id)a3 error:(id *)a4;

@end
