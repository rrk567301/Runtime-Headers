@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (int)servicePidFromXPCConnection:(id)a0;
+ (void)checkInWithLaunchd;
+ (void)assertIsExtensionProcess;

@end
