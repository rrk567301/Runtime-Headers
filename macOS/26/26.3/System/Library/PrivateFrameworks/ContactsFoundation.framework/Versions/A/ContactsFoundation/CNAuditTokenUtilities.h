@interface CNAuditTokenUtilities : NSObject

+ (id)processNameForAuditToken:(id)a0;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)_bundleIdentifierFromSecTaskForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)loggingIdentifierForCurrentProcess;
+ (id)bundleIdentifierForAuditToken:(id)a0;
+ (int)processIdentifierForAuditToken:(id)a0;
+ (id)loggingIdentifierForAuditToken:(id)a0;
+ (id)os_log;

@end
