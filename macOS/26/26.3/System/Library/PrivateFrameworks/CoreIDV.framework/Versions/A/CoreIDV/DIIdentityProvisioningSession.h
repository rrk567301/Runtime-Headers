@interface DIIdentityProvisioningSession : NSObject

- (id)init;
- (void)generateIdentityProvisioningAttestationsWithCredential:(id)a0 pairingID:(id)a1 completion:(id /* block */)a2;

@end
