@class NSString;

@interface IDSNGMFullDeviceIdentity : NSObject <IDSNGMIdentity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (void)unsealMessageAndAttributes:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 signedByPublicIdentity:(id)a8 decryptionBlock:(id /* block */)a9;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)keyRollingTicketWithError:(id *)a0;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)sign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (void)unsealMessageAndAttributes:(id)a0 guid:(id)a1 signedByPublicIdentity:(id)a2 decryptionBlock:(id /* block */)a3;
- (BOOL)shouldRollEncryptionIdentity;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)batchSign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (void)openPaddyMessage:(id)a0 sendingURI:(id)a1 sendingPushToken:(id)a2 receivingURI:(id)a3 receivingPushToken:(id)a4 signedByPublicIdentity:(id)a5 decryptionBlock:(id /* block */)a6;

@end
