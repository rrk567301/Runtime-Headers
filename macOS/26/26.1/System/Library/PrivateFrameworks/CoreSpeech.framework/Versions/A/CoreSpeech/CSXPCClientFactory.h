@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioSessionInfoProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForAudioProviding;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForMacOSDuckAudioDevice;

@end
