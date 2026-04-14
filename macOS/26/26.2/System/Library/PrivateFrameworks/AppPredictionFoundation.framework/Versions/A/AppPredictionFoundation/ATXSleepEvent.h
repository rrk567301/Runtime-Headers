@class NSDate;

@interface ATXSleepEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *sleepStartTime;
@property (readonly, copy, nonatomic) NSDate *wakeUpTime;
@property (readonly, nonatomic) double duration;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSleepStart:(id)a0 wakeUp:(id)a1;
- (BOOL)isEqualToATXSleepEvent:(id)a0;

@end
