@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (void)checkInWithLaunchd;
+ (void)assertIsExtensionProcess;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (int)servicePidFromXPCConnection:(id)a0;

@end
