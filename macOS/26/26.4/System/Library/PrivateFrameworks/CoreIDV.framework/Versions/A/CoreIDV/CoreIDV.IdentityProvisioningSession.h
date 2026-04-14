@class NSString, NSError, DIIdentityProvisioningAttestations;

@interface CoreIDV.IdentityProvisioningSession : NSObject <CoreIDV.IdentityProvisioningXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)generateIdentityProvisioningAttestationsWithCredentialIdentifier:(NSString *)a0 pairingID:(NSString *)a1 completionHandler:(void (^)(DIIdentityProvisioningAttestations *, NSError *))a2;

@end
