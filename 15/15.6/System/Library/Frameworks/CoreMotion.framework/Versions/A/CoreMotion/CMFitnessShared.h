@interface CMFitnessShared : NSObject

+ (char)isDeviceSatellitePaired;
+ (char)isWorkoutEndReminderEnabledWhenDeviceIsInMoveTimeMode:(char)a0 withCurrentSetting:(id)a1;
+ (char)isWorkoutResumeReminderEnabledWhenDeviceIsInMoveTimeMode:(char)a0 withCurrentSetting:(id)a1;
+ (char)isWorkoutStartReminderEnabledWhenDeviceIsSatellitePaired:(char)a0 isInMoveTimeMode:(char)a1 withCurrentSetting:(id)a2;

@end
