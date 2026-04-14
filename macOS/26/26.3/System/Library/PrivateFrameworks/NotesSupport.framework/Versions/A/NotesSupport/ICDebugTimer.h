@class NSDate;

@interface ICDebugTimer : NSObject

@property (retain) NSDate *startingDate;
@property double elapsedTime;

+ (id)debugTimerForClass:(Class)a0;
+ (void)enableTimersForClass:(Class)a0;

- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;

@end
