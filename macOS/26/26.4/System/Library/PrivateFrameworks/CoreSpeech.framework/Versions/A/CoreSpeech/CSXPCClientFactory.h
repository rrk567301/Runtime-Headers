@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForSmartSiriVolumeProviding;

@end
