@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUNSSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (BOOL)attemptToPlayDescriptor:(id)a0;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (void)stopPlaying;
- (id)init;
- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
