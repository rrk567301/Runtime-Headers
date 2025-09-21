@interface MDMDeviceQueryUtilities : NSObject

+ (id)allowedDeviceQueriesForAccessRights:(unsigned long long)a0 isDataSeparated:(char)a1;
+ (id)allowedDeviceQueriesOnUserChannelForAccessRights:(unsigned long long)a0;
+ (id)allowedDeviceQueriesWithUserEnrollment;

@end
