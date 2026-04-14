@class AAController, NSMutableDictionary, AADeviceManager, AACloudServicesClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMDeviceManager : NSObject {
    AAController *_aaController;
    BOOL _activateCalled;
    AACloudServicesClient *_cloudServicesClient;
    NSMutableDictionary *_deviceAHPSConnectionManagerMap;
    AADeviceManager *_deviceManager;
    NSMutableDictionary *_deviceRecordMap;
    NSMutableDictionary *_diagnosticRecordMap;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)_aaControllerEnsureStopped;
- (void)_accessoryDiscoveryEnsureStopped;
- (void)_activateAHPSConnectionForDevice:(id)a0;
- (void)_aaControllerEnsureStarted;
- (void)_accessoryDiscoveryEnsureStarted;
- (void)_cloudServicesClientEnsureStarted;
- (void)_cloudServicesClientEnsureStopped;
- (id)_constructPMEConfigDataBytesForDevice:(id)a0 fromConfig:(id)a1;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)_diagnosticDataReceived:(id)a0 identifier:(id)a1;
- (void)_invalidateAHPSConnectionForDevice:(id)a0;
- (void)_modifyDeviceConfiguration:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_performActionsOnRecordChange:(id)a0;
- (void)_pmeConfigDataReceived:(id)a0 identifier:(id)a1;
- (void)_sendConfigOverDeviceManager:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_sendPMEConfigOverAAController:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_triggerDiagnosticCheckForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_updatePersonalAudioConfigForIdentifier:(id)a0;
- (id)availableDiagnosticRecords;
- (id)availableRecords;

@end
