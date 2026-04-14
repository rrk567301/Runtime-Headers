@class AAController, NSMutableDictionary, AADeviceManager, HMOcclusionNotification, AACloudServicesClient, AAServicesDaemon, NSObject;
@protocol OS_dispatch_queue;

@interface HMDeviceManager : NSObject {
    AAController *_aaController;
    BOOL _activateCalled;
    AACloudServicesClient *_cloudServicesClient;
    NSMutableDictionary *_deviceAHPSConnectionManagerMap;
    AADeviceManager *_deviceManager;
    NSMutableDictionary *_deviceRecordMap;
    NSMutableDictionary *_diagnosticRecordMap;
    BOOL _distributedNotificationObserving;
    NSMutableDictionary *_latestConfigsMap;
    HMOcclusionNotification *_occlusionNotification;
    NSMutableDictionary *_throttleTimerMap;
}

@property (retain, nonatomic) AAServicesDaemon *internalAAServicesDaemon;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (void)invalidate;
- (void)_invalidate;
- (id)init;
- (void)_activate;
- (void)activate;
- (void).cxx_destruct;
- (void)occlusionIndicationShownForDeviceAddress:(id)a0 featureID:(int)a1 type:(int)a2 action:(int)a3;
- (void)fetchOcclusionResultForDeviceIdentifier:(id)a0 featureID:(int)a1 completion:(id /* block */)a2;
- (void)_aaControllerEnsureStarted;
- (void)_accessoryDiscoveryEnsureStarted;
- (void)_cloudServicesClientEnsureStopped;
- (id)_constructPMEConfigDataBytesForDevice:(id)a0 fromConfig:(id)a1;
- (void)_registerForRegionStatusUpdates;
- (void)_aaControllerEnsureStopped;
- (void)_accessoryDiscoveryEnsureStopped;
- (void)_activateAHPSConnectionForDevice:(id)a0;
- (void)_checkForOcclusionInDiagnosticRecord:(id)a0 forDevice:(id)a1;
- (void)_cloudServicesClientEnsureStarted;
- (void)_computeOcclusionResultFromFaultCountsInRecord:(id)a0 forDevice:(id)a1;
- (void)_continueDeviceConfigurationFlow:(id)a0 identifier:(id)a1 reply:(id /* block */)a2;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)_deviceRescindHearingAssist:(id)a0;
- (void)_deviceRescindHearingProtectionPPE:(id)a0;
- (void)_deviceSetOffListeningModeAllowedIfNeeded:(id)a0;
- (BOOL)_deviceUpdateRegionStatus:(id)a0;
- (void)_diagnosticDataReceived:(id)a0 identifier:(id)a1 isInternal:(BOOL)a2;
- (void)_distributedNotificationReceived:(id)a0;
- (void)_fetchOcclusionResultForDeviceIdentifier:(id)a0 featureID:(int)a1 completion:(id /* block */)a2;
- (void)_hearingAidConfigDataReceived:(id)a0 identifier:(id)a1;
- (void)_hearingProtectionValueReceived:(unsigned char)a0 identifier:(id)a1;
- (void)_invalidateAHPSConnectionForDevice:(id)a0;
- (void)_loadCloudRecordForDevice:(id)a0;
- (void)_modifyDeviceConfiguration:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_multimodalContextMessageReceived:(id)a0 identifier:(id)a1;
- (void)_occlusionIndicationShownForDeviceAddress:(id)a0 featureID:(int)a1 type:(int)a2 action:(int)a3;
- (void)_performActionsOnRecordChange:(id)a0;
- (void)_pmeConfigDataReceived:(id)a0 identifier:(id)a1;
- (void)_populateV1Struct:(id)a0 identifier:(id)a1 deviceRecord:(id)a2 hmSettingsStruct:(struct { unsigned char x0; unsigned char x1; unsigned short x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x4; } *)a3;
- (void)_populateV2Struct:(id)a0 identifier:(id)a1 deviceRecord:(id)a2 hmSettingsStruct:(struct { struct { unsigned char x0; unsigned char x1; unsigned short x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x4; } x0; float x1; } *)a3;
- (void)_registerForHearingAccessibilitySettingsUpdate;
- (void)_registerForInternalDistributedNotification;
- (void)_resetFaultCountForDevice:(id)a0;
- (void)_retrieveHearingProtectionSettingsForDevice:(id)a0;
- (void)_saveCloudRecordForDevice:(id)a0 withConfig:(id)a1;
- (void)_sendConfigOverDeviceManager:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_sendHAv2RegionStatus:(id)a0;
- (void)_sendHearingAidConfigOverAHPSConnection:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_sendPMEConfigOverAAController:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_setHearingProtectionEnabledForDevice:(id)a0 withConfig:(id)a1;
- (void)_submitHearingFeaturesMetricFor:(id)a0;
- (void)_throttleUpdatesForHearingAidConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_triggerDiagnosticCheckForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_triggerHearingProtectionOcclusionNotificationIfNeeded:(id)a0;
- (void)_unregisterFromHearingAccessibilitySettingsUpdate;
- (void)_unregisterFromInternalDistributedNotification;
- (void)_unregisterFromRegionStatusUpdates;
- (void)_updateCloudRecords:(id)a0;
- (void)_updatePersonalAudioConfigForIdentifier:(id)a0;
- (id)availableDiagnosticRecords;
- (id)availableRecords;

@end
