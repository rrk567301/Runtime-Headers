@class NSArray;

@interface ScreenTimeCore.Downtime : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ schedules;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ blockAtLimit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ scheduleEnabled;
@property (nonatomic, readonly) NSArray *schedules;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlockAtLimit:(char)a0 scheduleEnabled:(char)a1 schedules:(id)a2;
- (id)setWithBlockAtLimit:(char)a0;
- (id)setWithSchedule:(id)a0;
- (id)setWithScheduleEnabled:(char)a0;

@end
