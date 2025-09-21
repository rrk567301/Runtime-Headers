@interface CoreCECDeviceClient : CoreCECDevice

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (char)deckControlSetDeckStatus:(unsigned long long)a0 error:(id *)a1;
- (char)refreshDevices:(id *)a0;
- (char)deckControlCommandWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (char)deckControlPlayWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (char)deckControlRefreshStatus:(id)a0 requestType:(unsigned long long)a1 error:(id *)a2;
- (char)makeActiveSourceWithTVMenus:(char)a0 error:(id *)a1;
- (char)performStandbyWithTargetDevice:(id)a0 error:(id *)a1;
- (char)refreshProperties:(id)a0 ofDevice:(id)a1 error:(id *)a2;
- (void)removeFromBus;
- (char)requestActiveSource:(id *)a0;
- (char)requestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 error:(id *)a1;
- (char)requestAudioStatus:(id *)a0;
- (char)requestSystemAudioModeStatusChangeTo:(unsigned long long)a0 error:(id *)a1;
- (char)resignActiveSource:(id *)a0;
- (char)setAudioMuteStatus:(char)a0 error:(id *)a1;
- (char)setAudioReturnChannelControlEnabled:(char)a0 error:(id *)a1;
- (char)setAudioVolumeStatus:(unsigned long long)a0 error:(id *)a1;
- (char)setPowerStatus:(unsigned long long)a0 error:(id *)a1;
- (char)setSupportedAudioFormats:(const struct CoreCECAudioFormat { unsigned char x0[3]; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (char)setSystemAudioControlEnabled:(char)a0 error:(id *)a1;
- (char)setTrackAudioStatusEnabled:(char)a0 pressTimeout:(long long)a1 pollInterval:(long long)a2 error:(id *)a3;
- (char)systemAudioModeRequest:(unsigned long long)a0 error:(id *)a1;

@end
