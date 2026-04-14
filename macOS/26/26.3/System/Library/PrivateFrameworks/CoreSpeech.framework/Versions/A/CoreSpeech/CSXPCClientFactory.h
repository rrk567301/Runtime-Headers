@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioSessionInfoProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForAudioProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForSmartSiriVolumeProviding;

@end
