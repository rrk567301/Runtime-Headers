@interface TRIXPCActivitySupport : NSObject

+ (void)assertRegistrationOfLaunchdPlistActivities:(id)a0;
+ (id)_registeredActivities;
+ (id)nameForActivityState:(long long)a0;
+ (void)registerActivityWithLaunchDaemonDescriptor:(id)a0 checkInBlock:(id /* block */)a1 asyncHandler:(id /* block */)a2;
+ (BOOL)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)a0;

@end
