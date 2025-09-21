@class NSUUID, NSObject;
@protocol OS_os_transaction, _DKSyncRemoteContextStorage;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_CDRemoteUserContextServer, _DKSyncRemoteContextStorageDelegate> {
    unsigned long long _watchingDeviceTypes;
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;
}

@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) id<_DKSyncRemoteContextStorage> transportMDCSRapport;

- (void)requestActivateDevicesWithHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (id)sourceDeviceUUID;
- (void)setArchivedObjects:(id)a0 peer:(id)a1;
- (void)start;
- (void)dealloc;
- (BOOL)remoteContextStorage:(id)a0 hasKnowledgeOfKeyPath:(id)a1;
- (id)multiDeviceContextStoreDevices;
- (void)remoteContextStorage:(id)a0 subscribeToChangesWithPeer:(id)a1 registrationIdentifier:(id)a2 predicate:(id)a3;
- (void)handleContextChangedNotification:(id)a0;
- (void)setupStorage;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)sendContextValuesToPeer:(id)a0 registrationIdentifier:(id)a1 keyPaths:(id)a2;
- (BOOL)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)a0 error:(id *)a1;
- (void)remoteContextStorage:(id)a0 unsubscribeFromChangesWithPeer:(id)a1 registrationIdentifier:(id)a2 predicate:(id)a3;
- (void)handleStatusChangeForPeer:(id)a0 previousTransports:(long long)a1;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPropertiesOfRemoteKeyPaths:(id)a0 handler:(id /* block */)a1;
- (id)archivedObjectsForKeyPaths:(id)a0;
- (id)registrationIdentifierForPeer:(id)a0 remoteRegistrationIdentifier:(id)a1;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)remoteContextStorage:(id)a0 archivedObjectsForKeyPaths:(id)a1;
- (id)peersForContextStoreDeviceIDs:(id)a0;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1 handler:(id /* block */)a2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1 handler:(id /* block */)a2;
- (void)remoteContextStorage:(id)a0 registrationIdentifier:(id)a1 setArchivedObjects:(id)a2 peer:(id)a3;
- (void)_requestActivateDevicesWithHandler:(id /* block */)a0;
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)a0;
- (BOOL)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)subscribeToContextValueChangeNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;

@end
