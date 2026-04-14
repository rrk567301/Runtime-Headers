@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_os_log;

@interface UpgradeInterfaceLock : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *lockConn;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)getSharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isLocked;
- (void)_handleXPCMessage:(id)a0;
- (int)releaseLock;
- (int)acquireLock;
- (id)_createXPCRequest;
- (BOOL)_isLockedOnQueue;
- (int)_acquireLockOnQueue;

@end
