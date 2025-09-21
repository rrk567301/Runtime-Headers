@interface AuthenticationServices.ASAuthorizationAccountCreationPlatformPublicKeyCredential : NSObject <ASAuthorizationCredential> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ credentialRegistration;
    void /* unknown type, empty encoding */ email;
    void /* unknown type, empty encoding */ phoneNumber;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
