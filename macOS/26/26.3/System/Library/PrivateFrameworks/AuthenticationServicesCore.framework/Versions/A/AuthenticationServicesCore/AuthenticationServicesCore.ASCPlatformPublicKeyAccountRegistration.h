@class ASCPlatformPublicKeyCredentialRegistration;

@interface AuthenticationServicesCore.ASCPlatformPublicKeyAccountRegistration : NSObject <ASCCredentialProtocol> {
    void /* unknown type, empty encoding */ emailIdentifier;
    void /* unknown type, empty encoding */ phoneIdentifier;
    void /* unknown type, empty encoding */ name;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASCPlatformPublicKeyCredentialRegistration *credentialRegistration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEmailIdentifier:(id)a0 phoneIdentifier:(id)a1 name:(id)a2 credentialRegistration:(id)a3;

@end
