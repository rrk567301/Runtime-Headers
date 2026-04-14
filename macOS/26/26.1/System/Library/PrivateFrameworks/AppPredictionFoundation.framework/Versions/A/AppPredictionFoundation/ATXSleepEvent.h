@class NSDate;

@interface ATXSleepEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *sleepStartTime;
@property (readonly, copy, nonatomic) NSDate *wakeUpTime;
@property (readonly, nonatomic) double duration;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSleepStart:(id)a0 wakeUp:(id)a1;
- (BOOL)isEqualToATXSleepEvent:(id)a0;

@end
