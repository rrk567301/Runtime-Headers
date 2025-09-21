@class _TtC14ScreenTimeCore8Schedule;

@interface ScreenTimeCore.AppLimitSchedule : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _TtC14ScreenTimeCore8Schedule *schedule;
@property (nonatomic, readonly) double allowedTime;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAllowedTime:(double)a0 schedule:(id)a1;

@end
