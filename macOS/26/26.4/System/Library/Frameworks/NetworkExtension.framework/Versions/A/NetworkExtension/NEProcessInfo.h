@interface NEProcessInfo : NSObject

+ (BOOL)is64bitCapable;
+ (id)copyDNSUUIDs;
+ (void)clearUUIDCache;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForPID:(int)a0;
+ (id)copyUUIDsForExecutableWithoutCache:(id)a0;

- (id)init;

@end
