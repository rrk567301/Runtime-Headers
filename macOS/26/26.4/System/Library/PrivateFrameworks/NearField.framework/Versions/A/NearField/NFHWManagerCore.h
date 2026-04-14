@class NSObject, NSString, NSMutableDictionary, NSMutableSet, NSUUID, NSMutableArray, NFXPCServiceClient;
@protocol OS_dispatch_queue;

@interface NFHWManagerCore : NSObject <NFXPCServiceClientDelegate, NFHardwareManagerCallbacks> {
    NFXPCServiceClient *_xpc;
    NSMutableDictionary *_secureElementsById;
    NSMutableSet *_delegateSet;
    NSMutableArray *_waitingClients;
    NSUUID *_callbackUUID;
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _hwSupportUpdateTime;
    unsigned int _hwSupport;
    unsigned int _lastClientState;
    unsigned long long _xpcConnectionID;
    unsigned long long _registerAfterInterruptTries;
    int _remoteCallbackListeners;
    BOOL _registeredHWMgrCallbacks;
    BOOL _didPreWarm;
    BOOL _connectionWasReset;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)temperatureChanged:(double)a0;
- (void)didChangeRadioState:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didInterrupt:(id)a0 connectionID:(unsigned long long)a1;
- (void)didInvalidate:(unsigned long long)a0;
- (void)hwStateDidChange:(unsigned int)a0;
- (void)secureElementInfoUpdates:(id)a0 restrictedModeEntered:(id)a1 restrictedModeExited:(id)a2;

@end
