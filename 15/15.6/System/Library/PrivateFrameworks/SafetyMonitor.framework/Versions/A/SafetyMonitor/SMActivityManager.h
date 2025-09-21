@interface SMActivityManager : NSObject

+ (void)endActivities;
+ (char)hasActivity;
+ (void)startActivityWithState:(id)a0 localState:(id)a1;
+ (void)updateActivityWithState:(id)a0 localState:(id)a1 shouldNotify:(char)a2;

@end
