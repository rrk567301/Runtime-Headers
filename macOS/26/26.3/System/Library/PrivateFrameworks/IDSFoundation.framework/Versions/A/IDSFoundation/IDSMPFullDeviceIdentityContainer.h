@class NSData, NSNumber, IDSMPFullLegacyIdentity;
@protocol IDSSyncQueue, IDSNGMIdentity;

@interface IDSMPFullDeviceIdentityContainer : NSObject

@property (retain, nonatomic) id<IDSSyncQueue> queue;
@property (retain, nonatomic) NSData *cachedLegacySerializedData;
@property (readonly, nonatomic) id<IDSNGMIdentity> ngmFullDeviceIdentity;
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyFullIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithLegacyFullIdentity:(id)a0 ngmFullDeviceIdentity:(id)a1 ngmVersion:(id)a2 queue:(id)a3 error:(id *)a4;
+ (id)identityWithDataRepresentation:(id)a0 queue:(id)a1 error:(id *)a2;
+ (id)_identityWithLegacyFullIdentity:(id)a0 ngmFullDeviceIdentity:(id)a1 ngmVersion:(id)a2 legacyFullIdentitySerializedData:(id)a3 queue:(id)a4 error:(id *)a5;

- (id)initWithFullLegacyIdentity:(id)a0 ngmFullDeviceidentity:(id)a1 ngmVersion:(id)a2 legacyFullIdentitySerializedData:(id)a3 queue:(id)a4;
- (id)dataRepresentationWithError:(id *)a0;
- (id)debugDescription;
- (id)description;
- (id)_paddyUnsealMessage:(id)a0 sendingURI:(id)a1 sendingPushToken:(id)a2 receivingURI:(id)a3 receivingPushToken:(id)a4 signedByPublicIdentity:(id)a5;
- (BOOL)hasNGMIdentity;
- (id)ngmKeyRollingTicketWithError:(id *)a0;
- (BOOL)hasLegacyIdentity;
- (id)_ngmSynchronouslyUnsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)a0 forMessage:(id)a1;
- (id)publicIdentityWithError:(id *)a0;
- (void).cxx_destruct;
- (void)accessNGMIdentityOnQueue:(id /* block */)a0;
- (id)batchSignWithNGMIdentity:(id)a0 forType:(long long)a1 error:(id *)a2;
- (id)_legacyUnsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void)eraseNGMIdentityFromKeychain;
- (id)signDataWithNGMIdentity:(id)a0 forType:(long long)a1 error:(id *)a2;
- (BOOL)isEqual:(id)a0;
- (id)unsealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 signedByPublicIdentity:(id)a8 usingIdentityWithIdentifier:(id)a9;
- (unsigned long long)hash;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 usingIdentityWithIdentifier:(id)a2 error:(id *)a3;
- (BOOL)updateNGMIdentityWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)_ngmUnsealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 signedByPublicIdentity:(id)a8;
- (BOOL)shouldRollNGMEncryptionIdentity;

@end
