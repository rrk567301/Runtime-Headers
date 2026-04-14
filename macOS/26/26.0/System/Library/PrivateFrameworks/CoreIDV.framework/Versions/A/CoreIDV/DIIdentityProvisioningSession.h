@class _TtC7CoreIDV27IdentityProvisioningSession;

@interface DIIdentityProvisioningSession : NSObject

@property (retain, nonatomic) _TtC7CoreIDV27IdentityProvisioningSession *provisioningSession;

- (id)init;
- (void).cxx_destruct;
- (void)generateIdentityProvisioningAttestationsWithCredential:(id)a0 pairingID:(id)a1 completion:(id /* block */)a2;

@end
