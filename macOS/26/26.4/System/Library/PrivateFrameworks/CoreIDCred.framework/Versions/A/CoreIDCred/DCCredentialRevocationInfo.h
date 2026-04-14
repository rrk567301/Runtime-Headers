@class NSData, NSURL;

@interface DCCredentialRevocationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSData *certificate;
@property (readonly, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 certificate:(id)a1 URL:(id)a2;

@end
