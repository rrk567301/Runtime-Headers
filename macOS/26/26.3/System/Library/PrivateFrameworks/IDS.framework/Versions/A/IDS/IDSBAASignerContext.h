@class NSString;

@interface IDSBAASignerContext : NSObject <NSSecureCoding, IDSBaseMessageSigningSessionBAAContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *signingDigest;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSigningDigest:(id)a0;

@end
