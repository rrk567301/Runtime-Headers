@class ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput;

@interface ASPasskeyAssertionCredentialExtensionInput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *largeBlob;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoreExtensions:(id)a0;

@end
