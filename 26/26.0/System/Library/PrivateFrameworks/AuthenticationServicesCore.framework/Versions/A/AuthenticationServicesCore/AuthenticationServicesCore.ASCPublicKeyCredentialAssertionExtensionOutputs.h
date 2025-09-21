@class NSString;

@interface AuthenticationServicesCore.ASCPublicKeyCredentialAssertionExtensionOutputs : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ largeBlob;
    void /* unknown type, empty encoding */ prf;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
