@class ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput;

@interface ASPasskeyAssertionCredentialExtensionInput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *largeBlob;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithCoreExtensions:(id)a0;

@end
