@class NSString;

@interface STSCredentialRequest : NSObject <NSSecureCoding> {
    unsigned long long _type;
    NSString *_credentialIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
