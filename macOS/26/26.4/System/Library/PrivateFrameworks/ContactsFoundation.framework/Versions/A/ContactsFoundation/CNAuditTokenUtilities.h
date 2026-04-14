@interface CNAuditTokenUtilities : NSObject

+ (id)os_log;
+ (id)bundleIdentifierForAuditToken:(id)a0;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)processNameForAuditToken:(id)a0;
+ (id)_bundleIdentifierFromSecTaskForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)loggingIdentifierForAuditToken:(id)a0;
+ (int)processIdentifierForAuditToken:(id)a0;
+ (id)loggingIdentifierForCurrentProcess;

@end
