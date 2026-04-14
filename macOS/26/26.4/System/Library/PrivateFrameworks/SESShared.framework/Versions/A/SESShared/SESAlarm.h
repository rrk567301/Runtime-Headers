@class NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SESAlarm : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableSet *pendingAlarms;
}

+ (void)setAlarm:(id)a0 secondsFromNow:(double)a1 shouldWake:(BOOL)a2;
+ (BOOL)isAlarmSet:(id)a0;
+ (void)deregisterAlarm:(id)a0;
+ (id)sharedObject;
+ (BOOL)registerAlarm:(id)a0 handler:(id)a1;
+ (void)kickoff;
+ (void)clearAlarm:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_handleAlarmFired:(id)a0;

@end
