@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForFallbackAudioSessionReleaseProviding;

@end
