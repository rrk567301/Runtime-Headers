@class NSString, MPCPlaybackEngine;

@interface MusicKit_SoftLinking_MPCPlaybackEngine : NSObject {
    MPCPlaybackEngine *_underlyingPlaybackEngine;
}

@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, nonatomic, getter=isStarted) char started;
@property (nonatomic, getter=isSystemMusicApplication, setter=musicKit_setSystemMusicApplication:) char systemMusicApplication;
@property (nonatomic, getter=isAudioAnalyzerEnabled, setter=musicKit_setAudioAnalyzerEnabled:) char audioAnalyzerEnabled;
@property (nonatomic, getter=isPictureInPictureSupported, setter=musicKit_setPictureInPictureSupported:) char pictureInPictureSupported;
@property (nonatomic, getter=isVideoSupported, setter=musicKit_setVideoSupported:) char videoSupported;
@property (nonatomic, getter=isStateRestorationSupported, setter=musicKit_setStateRestorationSupported:) char stateRestorationSupported;

- (void).cxx_destruct;
- (void)start;
- (void)becomeActive;
- (void)restoreStateWithCompletion:(id /* block */)a0;
- (void)setAudioAnalyzerEnabled:(char)a0;
- (void)setPictureInPictureSupported:(char)a0;
- (void)setStateRestorationSupported:(char)a0;
- (void)setSystemMusicApplication:(char)a0;
- (void)setVideoSupported:(char)a0;
- (id)initWithPlayerID:(id)a0 options:(unsigned long long)a1 fallbackPlaybackIntent:(id)a2;

@end
