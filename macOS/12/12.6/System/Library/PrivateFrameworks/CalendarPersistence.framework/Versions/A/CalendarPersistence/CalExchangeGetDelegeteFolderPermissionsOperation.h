@interface CalExchangeGetDelegeteFolderPermissionsOperation : NSObject

+ (int)getCalRemoteCalendarPermissionFromFolder:(id)a0;
+ (int)getCalDelegateUserPermissionFromFolder:(id)a0;
+ (BOOL)executeWithAccount:(id)a0 withDelegate:(id)a1 withError:(id *)a2 inContext:(id)a3;

@end
