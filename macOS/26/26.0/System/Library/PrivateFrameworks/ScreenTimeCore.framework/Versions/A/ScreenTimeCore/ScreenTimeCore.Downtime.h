@class NSArray;

@interface ScreenTimeCore.Downtime : NSObject <NSSecureCoding> {
    void /* function */ schedules;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL blockAtLimit;
@property (nonatomic, readonly) BOOL scheduleEnabled;
@property (nonatomic, readonly) NSArray *schedules;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlockAtLimit:(BOOL)a0 scheduleEnabled:(BOOL)a1 schedules:(id)a2;
- (id)setWithBlockAtLimit:(BOOL)a0;
- (id)setWithSchedule:(id)a0;
- (id)setWithScheduleEnabled:(BOOL)a0;

@end
