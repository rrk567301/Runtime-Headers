@class NSString, NSDate;

@interface IMKPerformanceTimer : NSObject

@property (retain) NSDate *startingTime;
@property (retain) NSDate *stoppingTime;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *annotation;
@property (readonly, nonatomic) double elapsedTime;
@property (nonatomic) double limit;
@property (readonly, nonatomic) BOOL passedLimit;

+ (id)timerWithName:(id)a0 annotation:(id)a1 limit:(double)a2;
+ (id)performanceTimerDictionary;
+ (id)timerWithName:(id)a0;

- (void)start;
- (void)reset;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)logIfPassedLimit;

@end
