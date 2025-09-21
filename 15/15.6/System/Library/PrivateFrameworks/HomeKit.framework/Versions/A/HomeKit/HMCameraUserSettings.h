@class NSUUID, NSString, NSArray, HMAccessory, NSSet, _HMContext, NSObject, HMCharacteristic, _HMCameraUserSettings, HMCameraBulletinBoardSmartNotification;
@protocol OS_dispatch_queue, HMCameraUserSettingsDelegate;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) _HMCameraUserSettings *cameraUserSettings;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, getter=isAccessModeChangeNotificationEnabled) char accessModeChangeNotificationEnabled;
@property (readonly, getter=isCameraManuallyDisabled) char cameraManuallyDisabled;
@property (readonly, getter=activityZones) NSSet *activityZones;
@property (readonly, getter=areActivityZonesIncludedForSignificantEventDetection) char activityZonesIncludedForSignificantEventDetection;
@property (readonly, getter=isReachabilityEventNotificationEnabled) char reachabilityEventNotificationEnabled;
@property (weak) id<HMCameraUserSettingsDelegate> delegate;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) HMCharacteristic *snapshotsAllowedCharacteristic;
@property (readonly, getter=areSnapshotsAllowed) char snapshotsAllowed;
@property (readonly) HMCharacteristic *accessModeIndicatorEnabledCharacteristic;
@property (readonly, getter=isAccessModeIndicatorEnabled) char accessModeIndicatorEnabled;
@property (readonly) HMCharacteristic *nightVisionModeEnabledCharacteristic;
@property (readonly, getter=isNightVisionModeEnabled) char nightVisionModeEnabled;
@property (readonly) HMCharacteristic *recordingAudioEnabledCharacteristic;
@property (readonly, getter=isRecordingAudioEnabled) char recordingAudioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)configureWithAccessory:(id)a0 context:(id)a1;
- (id)createSmartNotificationBulletin;
- (void)handleSettingsDidUpdateMessage:(id)a0;
- (id)_characteristicWithType:(id)a0 serviceType:(id)a1;
- (void)_mergeNewSettings:(id)a0;
- (void)_sendSettingsUpdateMessage:(id)a0 completion:(id /* block */)a1 successHandler:(id /* block */)a2;
- (void)_updateSettings:(id)a0 shouldNotifyDelegate:(char)a1;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeForCameraHomePresence:(unsigned long long)a0;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)a0;
- (unsigned long long)accessModeNotAtHome;
- (id)initWithCameraUserSettings:(id)a0;
- (id)messageDestination;
- (void)updateAccessMode:(unsigned long long)a0 forCameraHomePresence:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)updateAccessMode:(unsigned long long)a0 forPresenceEventType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)updateAccessModeChangeNotificationEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateAccessModeIndicatorEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateActivityZones:(id)a0 areActivityZonesIncludedForSignificantEventDetection:(char)a1 completionHandler:(id /* block */)a2;
- (void)updateBulletinNotificationEnabled:(char)a0 condition:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateNightVisionModeEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateReachabilityEventNotificationEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateRecordingAudioEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateRecordingEventTriggers:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateSnapshotsAllowed:(char)a0 completionHandler:(id /* block */)a1;

@end
