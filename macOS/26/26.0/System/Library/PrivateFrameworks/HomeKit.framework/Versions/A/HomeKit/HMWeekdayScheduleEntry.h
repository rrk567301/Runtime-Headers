@class NSDateComponents;

@interface HMWeekdayScheduleEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long weekdays;
@property (readonly, nonatomic) NSDateComponents *startTime;
@property (readonly, nonatomic) NSDateComponents *endTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWeekdays:(unsigned long long)a0 startTime:(id)a1 endTime:(id)a2;

@end
