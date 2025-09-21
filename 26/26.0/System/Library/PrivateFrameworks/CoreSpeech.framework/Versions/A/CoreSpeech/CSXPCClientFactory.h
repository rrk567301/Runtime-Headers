@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForAudioProviding;

@end
