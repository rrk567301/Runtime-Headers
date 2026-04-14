@interface MessageProtection.TetraAPI : NSObject

+ (BOOL)markForStateResetWithOurURI:(id)a0 ourPushToken:(id)a1 theirURI:(id)a2 theirPushToken:(id)a3 theirRegistration:(id)a4 signedByOur:(id)a5;
+ (void)openWithMessage:(id)a0 authenticatedData:(id)a1 guid:(id)a2 sendingURI:(id)a3 sendingPushToken:(id)a4 receivingURI:(id)a5 receivingPushToken:(id)a6 signedBy:(id)a7 tetraVersion:(unsigned int)a8 ourPrekeys:(id)a9 ourSigningPublicKeyCompactRepresentation:(id)a10 decryptionBlock:(id /* block */)a11;
+ (id)sealWithMessage:(id)a0 authenticatedData:(id)a1 guid:(id)a2 sendingURI:(id)a3 sendingPushToken:(id)a4 receivingURI:(id)a5 receivingPushToken:(id)a6 receiverRegistration:(id)a7 encryptedAttributes:(id)a8 resetState:(BOOL)a9 signedBy:(id)a10 error:(id *)a11;

- (id)init;

@end
