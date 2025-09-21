@class NSPointerArray, _TSF_IODConnection, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface _TSF_TSDClockSync : NSObject {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSPointerArray *_updateClients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateClientsLock;
    IOKService *_service;
    _TSF_IODConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    char _logNotifyTest;
    unsigned long long _referenceCount;
    unsigned long long _asyncCallbackRefcon;
}

@property (readonly, nonatomic) unsigned long long clockIdentifier;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)connection;
- (id)service;
- (void)_handleNotification:(int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (void)_handleRefreshConnection;
- (void)addReference;
- (void)addUpdateClient:(id)a0;
- (char)deregisterAsyncCallback;
- (void)finalizeNotifications;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (char)registerAsyncCallback;
- (unsigned long long)releaseReference;
- (void)removeUpdateClient:(id)a0;

@end
