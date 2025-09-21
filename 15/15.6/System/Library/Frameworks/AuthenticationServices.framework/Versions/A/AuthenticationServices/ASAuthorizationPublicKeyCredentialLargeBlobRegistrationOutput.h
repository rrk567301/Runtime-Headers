@interface ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isSupported;

+ (id)_outputWithIsSupported:(char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIsSupported:(char)a0;

@end
