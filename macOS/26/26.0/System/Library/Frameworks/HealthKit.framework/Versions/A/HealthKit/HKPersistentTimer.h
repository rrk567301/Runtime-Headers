@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)timerWithKey:(id)a0;
+ (id)_prefixedKeyWithTimerKey:(id)a0;

- (void)clear;
- (id)timerValue;
- (void)start;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedMilliSeconds;
- (unsigned long long)elapsedSeconds;
- (void).cxx_destruct;

@end
