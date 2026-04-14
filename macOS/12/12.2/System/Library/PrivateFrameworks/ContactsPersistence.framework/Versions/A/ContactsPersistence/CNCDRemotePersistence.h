@interface CNCDRemotePersistence : NSObject

+ (id)interface;
+ (id)os_log;
+ (BOOL)canCurrentProcessUseRemotePersistenceMachPort;
+ (id)_newInterface;
+ (BOOL)shouldCurrentProcessUseRemotePersistence;

@end
