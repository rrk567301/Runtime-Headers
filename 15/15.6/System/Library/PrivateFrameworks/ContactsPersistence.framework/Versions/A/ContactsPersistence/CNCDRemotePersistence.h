@interface CNCDRemotePersistence : NSObject

+ (id)interface;
+ (id)os_log;
+ (id)_newInterface;
+ (char)canCurrentProcessUseRemotePersistenceMachPort;
+ (char)shouldCurrentProcessUseRemotePersistence;
+ (char)shouldCurrentProcessUseRemotePersistenceImpl;
+ (char)shouldWorkAroundMisconfiguredSandbox;

@end
