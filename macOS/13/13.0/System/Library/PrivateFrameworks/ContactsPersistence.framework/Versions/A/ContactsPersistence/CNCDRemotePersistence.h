@interface CNCDRemotePersistence : NSObject

+ (id)interface;
+ (id)os_log;
+ (BOOL)shouldCurrentProcessUseRemotePersistence;
+ (BOOL)shouldCurrentProcessUseRemotePersistenceImpl;
+ (id)_newInterface;
+ (BOOL)shouldWorkAroundMisconfiguredSandbox;
+ (BOOL)canCurrentProcessUseRemotePersistenceMachPort;

@end
