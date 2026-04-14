@interface AuthenticationServices.ASAuthorizationAccountCreationPlatformPublicKeyCredential : NSObject <ASAuthorizationCredential> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ credentialRegistration;
    void /* unknown type, empty encoding */ email;
    void /* unknown type, empty encoding */ phoneNumber;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
