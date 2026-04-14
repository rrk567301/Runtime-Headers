@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
}

@property (retain, nonatomic) id configChangedObserverToken;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)canHandleRequest:(id)a0;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)_logAudioFileInfo:(id)a0;
- (id)_scheduleActiveSound:(id)a0;
- (void)_scheduleOneShotSound:(id)a0 completion:(id /* block */)a1;
- (BOOL)_startEngineIfNeeded:(id *)a0;
- (void)_stopActiveSound:(id)a0;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;

@end
