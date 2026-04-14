@interface CMMotionUtils : NSObject

+ (id)logDirectory;
+ (BOOL)hasEntitlement:(id)a0;
+ (id)getExecutablePathFromPid:(int)a0;
+ (long long)authorizationStatus;
+ (struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })sendMessageSync:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
+ (void)tccServiceMotionAccessAllowingMacWithBlock:(id /* block */)a0;
+ (BOOL)isMotionActivityEntitled;
+ (void)tccServiceMotionAccessWithLabel:(id)a0;
+ (id)fileHandleForWritingToURL:(id)a0;
+ (void)tccServiceMotionAccessWithBlock:(id /* block */)a0;
+ (unsigned long long)copyDataFrom:(id)a0 to:(id)a1;
+ (void)tccServiceMotionAccessAllowingMac:(BOOL)a0 block:(id /* block */)a1;
+ (BOOL)featureAvailability:(const char *)a0;
+ (void)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withReplyClasses:(id)a1 callback:(id /* block */)a2;
+ (id)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withReplyClassesSync:(id)a1;
+ (long long)isAuthorizedForEntitlement:(id)a0;

@end
