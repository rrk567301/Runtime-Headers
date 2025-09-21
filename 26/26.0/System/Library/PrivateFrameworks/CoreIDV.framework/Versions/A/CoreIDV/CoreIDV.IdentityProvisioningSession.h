@class NSString, NSError, DIIdentityProvisioningAttestations;

@interface CoreIDV.IdentityProvisioningSession : NSObject <CoreIDV.IdentityProvisioningXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)generateIdentityProvisioningAttestationsWithCredentialIdentifier:(NSString *)a0 pairingID:(NSString *)a1 completionHandler:(void (^)(DIIdentityProvisioningAttestations *, NSError *))a2;

@end
