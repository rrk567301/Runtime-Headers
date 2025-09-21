@class IMRemoteObject, NSString, NSObject, IMAVDaemonListener, IMLocalObject, NSMutableArray, NSLock;
@protocol OS_dispatch_queue, IMAVDaemonProtocol;

@interface IMAVDaemonController : NSObject {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

@property (readonly, nonatomic) IMAVDaemonListener *listener;

+ (id)sharedInstance;

- (BOOL)removeListenerID:(id)a0;
- (BOOL)isConnected;
- (void)dealloc;
- (void)_listenerSetUpdated;
- (void)remoteObjectDiedNotification:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)localObjectDiedNotification:(id)a0;
- (id)init;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)addListenerID:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)hasListenerForID:(id)a0;
- (BOOL)isConnecting;
- (BOOL)localObjectExists;
- (void)_noteSetupComplete;
- (void).cxx_destruct;
- (BOOL)remoteObjectExists;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (BOOL)__isLocalObjectValidOnQueue:(id)a0;
- (BOOL)__isRemoteObjectValidOnQueue:(id)a0;
- (id)_daemonListenerProtocol;
- (void)_disconnectFromDaemon;
- (void)_localObjectDiedNotification:(id)a0;
- (BOOL)_makeConnectionWithCompletionBlock:(id /* block */)a0;
- (void)_remoteObjectDiedNotification:(id)a0;

@end
