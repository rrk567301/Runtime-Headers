@interface ScreenTimeCore.AppLimitSchedule : NSObject <NSSecureCoding>

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ schedule;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ allowedTime;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAllowedTime:(double)a0 schedule:(id)a1;

@end
