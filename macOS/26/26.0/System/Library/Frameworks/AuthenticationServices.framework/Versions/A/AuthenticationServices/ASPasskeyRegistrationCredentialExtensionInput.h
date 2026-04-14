@class ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput;

@interface ASPasskeyRegistrationCredentialExtensionInput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *largeBlob;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoreExtensions:(id)a0;

@end
