@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (void)assertIsExtensionProcess;
+ (int)servicePidFromXPCConnection:(id)a0;
+ (void)checkInWithLaunchd;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;

@end
