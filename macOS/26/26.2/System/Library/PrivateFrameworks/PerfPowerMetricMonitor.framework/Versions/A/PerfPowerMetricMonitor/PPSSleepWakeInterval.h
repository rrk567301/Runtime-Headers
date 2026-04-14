@interface PPSSleepWakeInterval : NSObject <NSCopying>

@property (nonatomic) unsigned long long sleepTime;
@property (nonatomic) unsigned long long wakeTime;
@property BOOL isEmitted;

- (unsigned long long)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithSleepTime:(unsigned long long)a0 wakeTime:(unsigned long long)a1;

@end
