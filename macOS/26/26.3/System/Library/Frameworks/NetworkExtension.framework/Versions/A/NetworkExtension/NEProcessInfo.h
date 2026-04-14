@interface NEProcessInfo : NSObject

+ (void)clearUUIDCache;
+ (BOOL)is64bitCapable;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForPID:(int)a0;
+ (id)copyDNSUUIDs;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForExecutableWithoutCache:(id)a0;

- (id)init;

@end
