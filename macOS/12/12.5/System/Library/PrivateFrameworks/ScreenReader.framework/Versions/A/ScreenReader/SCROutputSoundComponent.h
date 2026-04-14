@class NSLock, NSMutableDictionary;

@interface SCROutputSoundComponent : SCROutputComponent

@property (retain, nonatomic, setter=_setSounds:) NSMutableDictionary *_sounds;
@property (retain, nonatomic, setter=_setSoundsArrayLock:) NSLock *_soundsArrayLock;

+ (void)initialize;
+ (id)soundPathWithIdentifier:(id)a0 preferences:(id)a1;
+ (id)alertSoundPath;

- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (void)playSoundIdentifier:(id)a0 category:(id)a1;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (id)findSoundForAction:(id)a0 owner:(id)a1 soundIdentifier:(id)a2 category:(id)a3 preferences:(id)a4;
- (void)stopSoundOnSoundComponentThread:(id)a0;

@end
