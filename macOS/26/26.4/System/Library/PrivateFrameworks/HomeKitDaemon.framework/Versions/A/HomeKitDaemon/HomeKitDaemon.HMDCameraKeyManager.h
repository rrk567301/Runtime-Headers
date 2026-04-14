@class NSUUID;

@interface HomeKitDaemon.HMDCameraKeyManager : SwiftNativeNSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ taskManager;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ uniqueIdentifier;
    void /* unknown type, empty encoding */ taskIdentifier;
    void /* unknown type, empty encoding */ keyManagementService;
    void /* unknown type, empty encoding */ keyCharacteristic;
    void /* unknown type, empty encoding */ cameraKeyProviderFactory;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;

- (id)init;
- (void)handleBackgroundTaskManagerTimerFiredNotification:(id)a0;
- (void)handleRollKeyMessage:(id)a0;
- (void)handleUpdatePrimaryResidentNotification:(id)a0;

@end
