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

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)resume;
- (BOOL)pause;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (BOOL)play;
- (void)resetPosition;
- (void)deviceUIDDidChange;
- (void)channelMappingDidChange;
- (void)volumeDidChange;
- (void)shouldLoopDidChange;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
