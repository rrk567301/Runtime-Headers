@class NSString;

@interface IDSPhoneNumberCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *telURI;
@property (readonly, nonatomic) NSString *credential;
@property (readonly, nonatomic) long long credentialType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTelURI:(id)a0 credential:(id)a1 credentialType:(long long)a2;

@end
