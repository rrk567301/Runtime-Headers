@interface IMAVManagerImpl : IMAVManager

+ (id)sharedAVManager;

- (unsigned long long)state;
- (void)start;
- (void)setNilValueForKey:(id)a0;
- (void)stop;
- (unsigned int)_pixelFormat;
- (long long)numberOfAudioChannels;
- (void)setVideoDataSource:(id)a0;
- (id)videoDataSource;
- (void)_suspendVideo:(BOOL)a0;
- (BOOL)_fillBuffer:(struct __CVBuffer { } *)a0;
- (void)_IMVideoDataSourceNeedsUpdate;
- (void)setNumberOfAudioChannels:(long long)a0;
- (id)audioDeviceUID;
- (id)audioDeviceChannels;
- (id)controlBar;
- (void)_setAudioDeviceUID:(id)a0 channels:(id)a1;
- (void)setVideoOptimizationOptions:(unsigned long long)a0;
- (unsigned long long)videoOptimizationOptions;
- (unsigned long long)_filteredOptimizationOptions;
- (void)_updateControlBarFromDictionaryRepresentation:(id)a0;
- (void)_startListeningForIMDaemonListenerNotifications;
- (void)_daemonDidConnect:(id)a0;
- (unsigned long long)_effectiveState;
- (void)_changeStateIfAppropriate;
- (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
- (id)_iPhotoAlbumIDToShare;
- (void)_videoProviderChangedState:(id)a0;
- (void)_provideAudioOnDeviceUID:(id)a0 channels:(id)a1;
- (id)URLToShare;
- (id)_buildProviderForReceiver:(id)a0;

@end
