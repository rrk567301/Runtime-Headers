@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSData *subjectIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKeyIdentifier:(id)a0 subjectIdentifier:(id)a1;

@end
