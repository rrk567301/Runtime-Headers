@interface TRIXPCActivitySupport : NSObject

+ (void)registerActivityWithLaunchDaemonDescriptor:(id)a0 checkInBlock:(id /* block */)a1 asyncHandler:(id /* block */)a2;
+ (void)assertRegistrationOfLaunchdPlistActivities:(id)a0;
+ (BOOL)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)a0;
+ (id)_registeredActivities;
+ (id)nameForActivityState:(long long)a0;

@end
