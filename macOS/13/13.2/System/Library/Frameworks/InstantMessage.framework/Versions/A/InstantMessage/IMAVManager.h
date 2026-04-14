@interface IMAVManager : NSObject

+ (id)sharedAVManager;
+ (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
+ (id)sharedAVManagerReference;

- (unsigned long long)state;
- (void)start;
- (void)stop;
- (long long)numberOfAudioChannels;
- (void)setVideoDataSource:(id)a0;
- (id)videoDataSource;
- (BOOL)_fillBuffer:(struct __CVBuffer { } *)a0;
- (void)_IMVideoDataSourceNeedsUpdate;
- (void)setNumberOfAudioChannels:(long long)a0;
- (id)audioDeviceUID;
- (id)audioDeviceChannels;
- (id)controlBar;
- (void)setVideoOptimizationOptions:(unsigned long long)a0;
- (unsigned long long)videoOptimizationOptions;
- (void)_updateControlBarFromDictionaryRepresentation:(id)a0;
- (void)_startListeningForIMDaemonListenerNotifications;
- (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
- (id)_iPhotoAlbumIDToShare;
- (void)_provideAudioOnDeviceUID:(id)a0 channels:(id)a1;
- (id)URLToShare;

@end
