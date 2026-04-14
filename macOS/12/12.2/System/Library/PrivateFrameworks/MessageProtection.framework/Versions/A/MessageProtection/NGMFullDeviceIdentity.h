@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject

@property (retain, nonatomic) SigningKey *deviceSigningKey;
@property (retain, nonatomic) NSMutableArray *devicePrekeys;

+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id *)a0;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (BOOL)shouldRollEncryptionIdentity;
- (id)keyRollingTicketWithError:(id *)a0;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (BOOL)deleteKeyWithTag:(id)a0;
- (BOOL)requiresMigration;
- (void)postMigrationKeychainCleanup;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)initWithSigningKey:(id)a0 devicePrekeys:(id)a1;

@end
