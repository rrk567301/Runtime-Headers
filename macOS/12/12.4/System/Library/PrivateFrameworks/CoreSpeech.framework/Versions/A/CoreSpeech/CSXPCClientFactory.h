@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForMacOSDuckAudioDevice;
- (id)clientForAudioProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForSmartSiriVolumeProviding;

@end
