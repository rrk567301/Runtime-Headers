@class ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput;

@interface ASPasskeyRegistrationCredentialExtensionOutput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput *largeBlobRegistrationOutput;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLargeBlobOutput:(id)a0;

@end
