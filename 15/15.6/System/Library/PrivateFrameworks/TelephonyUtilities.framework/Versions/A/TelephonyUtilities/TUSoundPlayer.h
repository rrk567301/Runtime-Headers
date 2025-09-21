@class TURepeatingActor, NSObject;
@protocol OS_dispatch_queue;

@interface TUSoundPlayer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;
@property (nonatomic) char currentPlaying;
@property (readonly, nonatomic, getter=isPlaying) char playing;

- (id)init;
- (void).cxx_destruct;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (char)isCurrentPlaying;
- (char)isRepeatingActorPlaying;
- (void)playSound:(unsigned int)a0;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2;
- (void)playSoundIndefinitely:(unsigned int)a0 pauseDurationBetweenIterations:(double)a1;
- (void)setIsCurrentPlaying:(char)a0;
- (void)stopPlaying;

@end
