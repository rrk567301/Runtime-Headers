@interface NEProcessInfo : NSObject

+ (id)copyUUIDsForPID:(int)a0;
+ (id)copyDNSUUIDs;
+ (id)copyNEHelperUUIDs;
+ (BOOL)is64bitCapable;
+ (id)copyUUIDsForExecutableWithoutCache:(id)a0;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (void)clearUUIDCache;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;

- (id)init;

@end
