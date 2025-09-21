@class NSString;
@protocol LPAudioPlayer;

@interface LPAudioPlayerMediaPlayableAdaptor : NSObject <LPMediaPlayable> {
    id<LPAudioPlayer> _player;
}

@property (nonatomic, getter=isPlaying) char playing;
@property (readonly, nonatomic) char hasMuteControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;
- (void)resetPlaybackState;

@end
