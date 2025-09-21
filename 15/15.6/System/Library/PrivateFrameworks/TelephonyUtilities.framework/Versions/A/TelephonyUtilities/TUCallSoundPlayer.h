@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUNSSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) char playing;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (char)attemptToPlayDescriptor:(id)a0;
- (char)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (char)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (void)stopPlaying;

@end
