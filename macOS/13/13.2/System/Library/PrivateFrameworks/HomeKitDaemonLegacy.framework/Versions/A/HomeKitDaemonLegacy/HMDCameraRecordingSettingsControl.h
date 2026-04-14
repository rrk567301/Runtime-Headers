@class HMDCameraRecordingSupportedAudioConfiguration, NSObject, NSDictionary, NSMutableArray, HMDService, NSString, HMDCharacteristic, HMDHAPAccessory, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, NSArray, HMDCameraRecordingSupportedVideoConfiguration, NSNumber, NSNotificationCenter;
@protocol OS_dispatch_queue, HMDCameraRecordingSettingsControlDelegate;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>

@property (class, readonly) NSArray *audioConfigurationsByPreferenceOrder;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDService *recordingService;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSArray *videoConfigurationsByPreferenceOrder;
@property (readonly) NSMutableArray *pendingConfigureCompletionHandlers;
@property (readonly) HMDCharacteristic *recordingActiveCharacteristic;
@property (readonly) HMDCharacteristic *recordingSelectedConfigurationCharacteristic;
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration;
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration;
@property (retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration;
@property (retain) NSDictionary *recordingConfigurationOverrides;
@property (readonly, copy) NSNumber *configuredBitRate;
@property (readonly, copy) NSNumber *configuredIFrameInterval;
@property (readonly, copy) NSNumber *configuredImageWidth;
@property (readonly, copy) NSNumber *configuredImageHeight;
@property (readonly) double configuredFragmentDuration;
@property (readonly) double configuredPrebufferDuration;
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property (weak) id<HMDCameraRecordingSettingsControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)isSupportedVideoCodec:(id)a0;
+ (BOOL)isSupportedH264Profile:(id)a0;
+ (id)h264ProfileForCodecConfiguration:(id)a0;
+ (id)videoCodecForCodecConfiguration:(id)a0;
+ (BOOL)isSupportedAudioCodec:(id)a0;
+ (id)audioBitRateForCodecConfiguration:(id)a0;
+ (id)audioCodecForCodecConfiguration:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)handleCharacteristicValueUpdated:(id)a0;
- (id)logIdentifier;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryDisconnected:(id)a0;
- (void)handleCharacteristicsUpdated:(id)a0;
- (void)handleCameraProfileSettingsDidWriteToAccessory:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 recordingManagementService:(id)a2;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 recordingManagementService:(id)a2 notificationCenter:(id)a3;
- (id)_recordingGeneralConfiguration;
- (id)_preferredVideoConfigurationOverride;
- (id)_preferredAudioConfigurationOverride;
- (id)_recordingVideoConfiguration;
- (id)characteristicsToMonitor;
- (id)_recordingAudioConfiguration;
- (void)enableCharacteristicNotifications;
- (void)configureCameraRecordingSettings;
- (void)configureCameraRecordingSettingsWithCompletion:(id /* block */)a0;
- (void)reconfigureCameraRecordingSettingsWithReason:(id)a0;
- (void)handleAccessoryIsNotConfiguredError;
- (void)_writeCameraRecordingSettings;
- (void)_updateSelectedRecordingConfiguration:(id)a0;
- (void)_readCameraRecordingSettings;
- (void)_handleCurrentIsRecordingActive:(id)a0 selectedConfiguration:(id)a1;
- (void)_readSupportedCameraRecordingConfiguration;
- (void)_handleSupportedConfigurationCharacteristicsReadResponses:(id)a0;
- (id)_isRecordingActiveValueInResponses:(id)a0;
- (id)_selectedRecordingConfigurationInResponses:(id)a0;
- (id)_generalRecordingConfigurationInResponses:(id)a0;
- (id)_supportedAudioConfigurationInResponses:(id)a0;
- (id)_supportedVideoConfigurationInResponses:(id)a0;
- (id)_dataValueForCharacteristicOfType:(id)a0 inResponses:(id)a1;
- (id)_numberValueForCharacteristicOfType:(id)a0 inResponses:(id)a1;
- (void)_invokePendingConfigureCompletionHandlersWithError:(id)a0;
- (void)_setSelectedRecordingConfiguration:(id)a0;

@end
