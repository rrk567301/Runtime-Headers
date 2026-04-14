@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)a0;
+ (id)timerWithKey:(id)a0;

- (void)clear;
- (void)start;
- (unsigned long long)elapsedSeconds;
- (id)timerValue;
- (unsigned long long)elapsedMilliSeconds;
- (unsigned long long)elapsedNanoseconds;
- (void).cxx_destruct;

@end
