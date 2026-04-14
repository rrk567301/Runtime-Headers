@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (int)servicePidFromXPCConnection:(id)a0;
+ (void)assertIsExtensionProcess;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (void)checkInWithLaunchd;

@end
