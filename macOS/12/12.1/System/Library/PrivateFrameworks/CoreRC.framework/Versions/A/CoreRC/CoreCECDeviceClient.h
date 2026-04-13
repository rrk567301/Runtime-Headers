@interface CoreCECDeviceClient : CoreCECDevice

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)refreshProperties:(id)a0 ofDevice:(id)a1 error:(id *)a2;
- (BOOL)deckControlSetDeckStatus:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deckControlCommandWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (BOOL)deckControlPlayWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (BOOL)deckControlRefreshStatus:(id)a0 requestType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)a0 error:(id *)a1;
- (BOOL)performStandbyWithTargetDevice:(id)a0 error:(id *)a1;
- (BOOL)refreshDevices:(id *)a0;
- (BOOL)requestActiveSource:(id *)a0;
- (BOOL)resignActiveSource:(id *)a0;
- (BOOL)setSystemAudioControlEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)systemAudioModeRequest:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setPowerStatus:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setAudioReturnChannelControlEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)requestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setAudioVolumeStatus:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setAudioMuteStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)setSupportedAudioFormats:(const struct CoreCECAudioFormat { unsigned char x0[3]; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (BOOL)requestSystemAudioModeStatusChangeTo:(unsigned long long)a0 error:(id *)a1;

@end
