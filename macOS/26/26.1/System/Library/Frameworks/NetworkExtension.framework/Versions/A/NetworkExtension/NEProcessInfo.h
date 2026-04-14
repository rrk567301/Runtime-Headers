@interface NEProcessInfo : NSObject

+ (BOOL)is64bitCapable;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForPID:(int)a0;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyUUIDsForExecutableWithoutCache:(id)a0;

- (id)init;

@end
