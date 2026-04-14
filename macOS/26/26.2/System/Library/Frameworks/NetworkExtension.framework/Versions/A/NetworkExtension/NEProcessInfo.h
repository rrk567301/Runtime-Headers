@interface NEProcessInfo : NSObject

+ (id)copyNEHelperUUIDs;
+ (BOOL)is64bitCapable;
+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyUUIDsForPID:(int)a0;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForExecutableWithoutCache:(id)a0;

- (id)init;

@end
