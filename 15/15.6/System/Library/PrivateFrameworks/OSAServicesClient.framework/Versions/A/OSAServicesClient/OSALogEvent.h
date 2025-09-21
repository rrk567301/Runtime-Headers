@class NSDictionary, OSALogIdentity;

@interface OSALogEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) OSALogIdentity *identity;
@property (readonly, nonatomic) NSDictionary *details;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 details:(id)a1;

@end
