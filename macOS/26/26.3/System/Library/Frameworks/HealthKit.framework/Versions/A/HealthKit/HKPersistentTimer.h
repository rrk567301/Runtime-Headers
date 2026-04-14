@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)a0;
+ (id)timerWithKey:(id)a0;

- (void)start;
- (void)clear;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;
- (void).cxx_destruct;
- (unsigned long long)elapsedMilliSeconds;
- (id)timerValue;

@end
