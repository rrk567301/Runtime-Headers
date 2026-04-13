@interface SFCertAuthorityInvitationSigner : NSObject {
    struct __SecIdentity { } *_signingIdentity;
}

- (void)finalize;
- (void)dealloc;
- (int)verifyInvitation:(id)a0 invitationDictionary:(id *)a1 trustRefOnErr:(struct __SecTrust **)a2 signerIdentity:(struct __SecIdentity **)a3;
- (int)verifyInvitationFile:(id)a0 invitationDictionary:(id *)a1 trustRefOnErr:(struct __SecTrust **)a2 signerIdentity:(struct __SecIdentity **)a3;
- (void)_setSigningIdentity:(struct __SecIdentity { } *)a0;
- (int)signInvitationFile:(id)a0 outPath:(id)a1;
- (id)_copyAvailableSigningIdentities;

@end
