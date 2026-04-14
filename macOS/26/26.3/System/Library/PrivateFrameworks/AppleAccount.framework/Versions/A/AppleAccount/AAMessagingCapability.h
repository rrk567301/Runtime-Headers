@class NSString;

@interface AAMessagingCapability : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long capability;
@property (readonly, nonatomic) NSString *capabilityString;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapabilityType:(long long)a0;

@end
