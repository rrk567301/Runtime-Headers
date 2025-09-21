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
    char _hasCheckedForDaemon;
    char _acquiringDaemonConnection;
}

@property (readonly, nonatomic) IMAVDaemonListener *listener;

+ (id)sharedInstance;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (char)isConnected;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (void)_noteSetupComplete;
- (void)_remoteObjectCleanup;
- (char)addListenerID:(id)a0;
- (char)hasListenerForID:(id)a0;
- (char)isConnecting;
- (void)localObjectDiedNotification:(id)a0;
- (char)localObjectExists;
- (void)remoteObjectDiedNotification:(id)a0;
- (char)remoteObjectExists;
- (char)removeListenerID:(id)a0;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (char)__isLocalObjectValidOnQueue:(id)a0;
- (char)__isRemoteObjectValidOnQueue:(id)a0;
- (void)_disconnectFromDaemon;
- (void)_localObjectDiedNotification:(id)a0;
- (char)_makeConnectionWithCompletionBlock:(id /* block */)a0;
- (void)_remoteObjectDiedNotification:(id)a0;

@end
