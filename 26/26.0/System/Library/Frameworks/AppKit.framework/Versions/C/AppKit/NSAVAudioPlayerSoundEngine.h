@class NSString, AVAudioPlayer;
@protocol NSSoundEngineDelegate;

@interface NSAVAudioPlayerSoundEngine : NSObject <AVAudioPlayerDelegate, NSSoundEngine> {
    id<NSSoundEngineDelegate> _delegate;
    AVAudioPlayer *_audioPlayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) double duration;
@property double currentTime;

- (BOOL)pause;
- (void)dealloc;
- (void)stop;
- (BOOL)resume;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)volumeDidChange;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)channelMappingDidChange;
- (void)deviceUIDDidChange;
- (BOOL)play;
- (void)resetPosition;
- (void)shouldLoopDidChange;

@end
