@class NSHashTable, NSMutableDictionary, NSMutableSet;

@interface ARAppConnectionManager : NSObject {
    NSMutableDictionary *_deviceIDToAppConnection;
    NSMutableSet *_registeredAppConnections;
    NSHashTable *_observers;
    NSMutableDictionary *_deviceIDToSessionID;
    NSMutableDictionary *_deviceIDToEndpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)deregisterAppConnection:(id)a0;
- (void)registerAppConnection:(id)a0;
- (void)registerSessionID:(id)a0 forDeviceEndpoint:(id)a1;
- (BOOL)appConnectionIsRegistered:(id)a0;
- (id)appConnectionsForDeviceID:(id)a0;
- (void)deregisterAppConnections:(id)a0;
- (void)deregisterSessionID:(id)a0 forDeviceEndpoint:(id)a1;
- (id)deviceEndpointForDeviceID:(id)a0;
- (void)registerAppConnections:(id)a0;
- (id)sessionIDForDeviceEndpoint:(id)a0;
- (id)sessionIDForDeviceID:(id)a0;

@end
