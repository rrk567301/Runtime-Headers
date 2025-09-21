@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTCloudServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property struct __SCDynamicStore { } *systemConfigStore;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)_ensureXPCStarted;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)_interrupted;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidated;
- (id)init;
- (void).cxx_destruct;
- (void)magicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSystemContext;
- (void)cloudPairingIdentifierForPeripheral:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)createMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)createSoundProfileRecord:(id)a0 completion:(id /* block */)a1;
- (unsigned int)currentConsoleUserID;
- (void)deleteDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)deviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecordsWithCompletion:(id /* block */)a0;
- (void)deviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)a0;
- (void)fetchSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)forceCloudPairingForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)listenForUserChange;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)a0;
- (void)modifyDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifySoundProfileRecord:(id)a0 completion:(id /* block */)a1;

@end
