@class NSString;

@interface HMDHAPMediaProfile : HMDMediaProfile

@property long long airPlayEnable;
@property (readonly) NSString *clientIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (unsigned long long)capability;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)handleHomeCharacteristicValuesChanged:(id)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)_notifyProfileSettingsUpdated:(id)a0;
- (void)setEnable:(long long)a0 completionHandler:(id /* block */)a1;
- (void)handleCharacteristicsUpdated:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (void)handleResidentAdded:(id)a0;
- (id)_smartSpeakerService;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)a0;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)a0;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerAirPlayEnableCharacteristic;
- (id)_smartSpeakerAirPlayEnableReadRequest;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerMutedReadRequest;
- (void)_updateCurrentMediaState:(id)a0 volumePercentage:(id)a1 muted:(id)a2 enable:(id)a3 message:(id)a4;
- (id)_mediaSessionStateFromProfile;
- (void)updateMediaSessionState:(id)a0 usingServices:(id)a1;
- (void)updateMediaSessionState:(id)a0 usingCharacteristics:(id)a1;
- (void)_updateCharacteristicChanges;
- (void)_setCharacteristicNotifications:(BOOL)a0;
- (id)_allCharacteristicsToMonitor;
- (void)_disableCharacteristicNotifications;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)a0;
- (id)mediaSessionFromProfile;
- (id)initWithMediaServices:(id)a0;
- (id)playStateWriteRequestWithPlaybackState:(long long)a0;
- (id)volumeWriteRequestWithVolumePercentage:(id)a0;

@end
