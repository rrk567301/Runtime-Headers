@interface ARClipOnPresenceResult : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL leftIsPresent;
@property (readonly, nonatomic) BOOL rightIsPresent;

+ (id)resourceKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClipOnStatus:(long long)a0 leftIsPresent:(BOOL)a1 rightIsPresent:(BOOL)a2 timestamp:(double)a3;

@end
