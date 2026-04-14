@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy

+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluate;
- (void)configure;
- (void)registerForNotifications;
- (void)handleAccessoryConnectedNotification:(id)a0;
- (void)handleAccessoryDisconnectedNotification:(id)a0;
- (void)handleSettingsChange:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)monitorStreamStatus:(BOOL)a0;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_checkStreamingStatus;
- (void)_processStreamingStatus:(id)a0;

@end
