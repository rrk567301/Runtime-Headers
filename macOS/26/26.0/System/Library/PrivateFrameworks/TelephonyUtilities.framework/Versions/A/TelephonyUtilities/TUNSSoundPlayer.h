@class TURepeatingActor, NSSound, NSString;

@interface TUNSSoundPlayer : NSObject <NSSoundDelegate>

@property (retain, nonatomic) TURepeatingActor *repeatingActor;
@property (retain, nonatomic) NSSound *sound;
@property (copy, nonatomic) id /* block */ iterationComplete;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playSound:(id)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)playSound:(id)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2;
- (id)init;
- (void)stopPlaying;
- (void).cxx_destruct;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;

@end
