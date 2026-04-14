@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;

@end
