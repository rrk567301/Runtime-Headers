@class NSString;

@interface IDSBAASignerContext : NSObject <NSSecureCoding, IDSBaseMessageSigningSessionBAAContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *signingDigest;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSigningDigest:(id)a0;

@end
