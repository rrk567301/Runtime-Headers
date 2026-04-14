@class NSDate;

@interface ATXSleepEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *sleepStartTime;
@property (readonly, copy, nonatomic) NSDate *wakeUpTime;
@property (readonly, nonatomic) double duration;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithSleepStart:(id)a0 wakeUp:(id)a1;
- (BOOL)isEqualToATXSleepEvent:(id)a0;

@end
