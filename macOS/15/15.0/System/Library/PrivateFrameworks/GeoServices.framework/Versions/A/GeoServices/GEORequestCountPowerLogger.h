@interface GEORequestCountPowerLogger : NSObject

+ (id)sharedInstance;
+ (void)submitBackgroundTasksNeededDuringDaemonStart;

- (void)flushToPowerLog;
- (void)incrementCountForClient:(id)a0 requestType:(int)a1;

@end
