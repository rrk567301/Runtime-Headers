@class IDSNGMPublicDeviceIdentity, IDSMPPublicLegacyIdentity, NSNumber;
@protocol IDSSyncQueue;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (retain, nonatomic) id<IDSSyncQueue> queue;
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;

- (id)sealPaddyMessage:(id)a0 sendingURI:(id)a1 sendingPushToken:(id)a2 receivingURI:(id)a3 receivingPushToken:(id)a4 signedByFullIdentity:(id)a5 error:(id *)a6;
- (id)debugDescription;
- (id)_legacySealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (void)accessNGMIdentityOnQueue:(id /* block */)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)_ngmSealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 forceSizeOptimizations:(BOOL)a8 resetState:(BOOL)a9 withEncryptedAttributes:(id)a10 signedWithFullIdentity:(id)a11 usedIdentityWithIdentifier:(id *)a12 error:(id *)a13 additionalResult:(id *)a14;
- (BOOL)markForStateResetWithOurURI:(id)a0 ourPushToken:(id)a1 ourSigningIdentity:(id)a2 theirURI:(id)a3 theirPushToken:(id)a4;
- (id)description;
- (id)legacySealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usingIdentitiesWithIdentifier:(id)a3 error:(id *)a4;
- (id)initWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidNGMSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)sealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 forceSizeOptimizations:(BOOL)a8 resetState:(BOOL)a9 withEncryptedAttributes:(id)a10 signedByFullIdentity:(id)a11 usedIdentityWithIdentifier:(id *)a12 error:(id *)a13 additionalResult:(id *)a14;

@end
