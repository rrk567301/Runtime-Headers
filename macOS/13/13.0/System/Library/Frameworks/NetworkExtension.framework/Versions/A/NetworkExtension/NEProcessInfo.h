@interface NEProcessInfo : NSObject

+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyNEHelperUUIDs;
+ (BOOL)is64bitCapable;

- (id)init;

@end
