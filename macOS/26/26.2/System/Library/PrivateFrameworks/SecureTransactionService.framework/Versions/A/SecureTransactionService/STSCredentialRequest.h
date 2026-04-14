@class NSString;

@interface STSCredentialRequest : NSObject <NSSecureCoding> {
    unsigned long long _type;
    NSString *_credentialIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
