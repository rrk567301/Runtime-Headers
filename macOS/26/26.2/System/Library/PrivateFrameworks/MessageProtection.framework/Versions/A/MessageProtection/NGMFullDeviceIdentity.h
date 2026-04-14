@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject

@property (retain, nonatomic) NSMutableArray *devicePrekeys;
@property (retain, nonatomic) SigningKey *deviceSigningKey;

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;

- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (void)unsealMessageAndAttributes:(id)a0 guid:(id)a1 signedByPublicIdentity:(id)a2 decryptionBlock:(id /* block */)a3;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (id)dataRepresentationWithError:(id *)a0;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)keyRollingTicketWithError:(id *)a0;
- (void)unsealMessageAndAttributes:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 signedByPublicIdentity:(id)a8 decryptionBlock:(id /* block */)a9;
- (void)postMigrationKeychainCleanup;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (id)batchSign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (id)initWithSigningKey:(id)a0 devicePrekeys:(id)a1;
- (void).cxx_destruct;
- (void)unsealMessageAndAttributes:(id)a0 guid:(id)a1 sendingURI:(id)a2 sendingPushToken:(id)a3 receivingURI:(id)a4 receivingPushToken:(id)a5 signedByPublicIdentity:(id)a6 decryptionBlock:(id /* block */)a7;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (id)description;
- (BOOL)shouldRollEncryptionIdentity;
- (BOOL)testing_duplicatePrekeyRegistration;
- (id)sign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (BOOL)deleteKeyWithTag:(id)a0;
- (BOOL)requiresMigration;

@end
