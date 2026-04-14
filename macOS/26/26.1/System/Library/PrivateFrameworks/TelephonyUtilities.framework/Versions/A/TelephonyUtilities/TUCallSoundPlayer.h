@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUNSSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (BOOL)attemptToPlayDescriptor:(id)a0;
- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopPlaying;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (id)init;

@end
