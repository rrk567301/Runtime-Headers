@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy

+ (id)logCategory;

- (void)configure;
- (void)registerForNotifications;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluate;
- (void)_checkStreamingStatus;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_processStreamingStatus:(id)a0;
- (id)_streamStatusCharacteristics;
- (void)handleAccessoryConfiguredNotification:(id)a0;
- (void)handleAccessoryUnconfiguredNotification:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)handleSettingsChange:(id)a0;
- (void)monitorStreamStatus:(BOOL)a0;

@end
