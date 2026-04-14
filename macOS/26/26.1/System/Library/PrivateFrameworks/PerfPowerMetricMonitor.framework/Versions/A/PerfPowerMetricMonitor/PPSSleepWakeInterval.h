@interface PPSSleepWakeInterval : NSObject <NSCopying>

@property (nonatomic) unsigned long long sleepTime;
@property (nonatomic) unsigned long long wakeTime;
@property BOOL isEmitted;

- (id)description;
- (unsigned long long)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSleepTime:(unsigned long long)a0 wakeTime:(unsigned long long)a1;

@end
