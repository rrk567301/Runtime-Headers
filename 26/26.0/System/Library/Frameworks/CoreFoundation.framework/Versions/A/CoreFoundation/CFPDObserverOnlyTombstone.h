@class NSObject;
@protocol OS_xpc_object;

@interface CFPDObserverOnlyTombstone : NSObject {
    struct __CFString { } *_domain;
    struct __CFString { } *_userOrContainer;
    union { NSObject<OS_xpc_object> *_single; struct __CFSet *_multiple; } _observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned short _shmemIndex;
    unsigned char _isManaged : 1;
    unsigned char _notificationInProgress : 1;
    unsigned char _needToNotify : 1;
}

- (void)dealloc;
- (BOOL)managed;
- (void)notifyObservers;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)alreadyLocked_transferObservingConnectionsFromSource:(id)a0;
- (id)initMatchingSource:(id)a0;
- (void)removeObservingConnection:(id)a0 daemon:(id)a1;
- (void)transferObservingConnectionsToSource:(id)a0;

@end
