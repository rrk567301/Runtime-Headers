@interface NEProcessInfo : NSObject

+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (BOOL)is64bitCapable;

- (id)init;

@end
