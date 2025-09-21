@class NSData, NSURL;

@interface DCCredentialRevocationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSData *certificate;
@property (readonly, nonatomic) NSURL *URL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 certificate:(id)a1 URL:(id)a2;

@end
