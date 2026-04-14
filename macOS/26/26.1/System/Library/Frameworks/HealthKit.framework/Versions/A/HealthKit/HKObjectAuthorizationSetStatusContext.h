@class NSDictionary, NSUUID;

@interface HKObjectAuthorizationSetStatusContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *objectAuthorizationStatuses;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectAuthorizationStatuses:(id)a0 sessionIdentifier:(id)a1;

@end
