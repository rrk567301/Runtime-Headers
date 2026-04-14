@class NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SESAlarm : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableSet *pendingAlarms;
}

+ (void)clearAlarm:(id)a0;
+ (BOOL)isAlarmSet:(id)a0;
+ (void)kickoff;
+ (BOOL)registerAlarm:(id)a0 handler:(id)a1;
+ (void)setAlarm:(id)a0 secondsFromNow:(double)a1;
+ (void)deregisterAlarm:(id)a0;
+ (id)sharedObject;

- (void)_handleAlarmFired:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
