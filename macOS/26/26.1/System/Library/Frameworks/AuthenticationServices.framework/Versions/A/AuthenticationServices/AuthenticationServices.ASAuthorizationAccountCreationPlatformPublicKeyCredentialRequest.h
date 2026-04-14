@interface AuthenticationServices.ASAuthorizationAccountCreationPlatformPublicKeyCredentialRequest : ASAuthorizationRequest {
    void /* unknown type, empty encoding */ acceptedContactIdentifiers;
    void /* unknown type, empty encoding */ shouldRequestName;
    void /* unknown type, empty encoding */ relyingPartyIdentifier;
    void /* unknown type, empty encoding */ challenge;
    void /* unknown type, empty encoding */ userID;
}

- (id)initWithProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsStyle:(long long)a0;

@end
