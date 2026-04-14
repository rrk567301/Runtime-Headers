@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)timerWithKey:(id)a0;
+ (id)_prefixedKeyWithTimerKey:(id)a0;

- (void)clear;
- (unsigned long long)elapsedSeconds;
- (void).cxx_destruct;
- (void)start;
- (id)timerValue;
- (unsigned long long)elapsedMilliSeconds;
- (unsigned long long)elapsedNanoseconds;

@end
