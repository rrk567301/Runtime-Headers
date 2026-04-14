@class TURepeatingActor, NSObject;
@protocol OS_dispatch_queue;

@interface TUSoundPlayer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;
@property (nonatomic) BOOL currentPlaying;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void)playSound:(unsigned int)a0;
- (void)setIsCurrentPlaying:(BOOL)a0;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2;
- (id)init;
- (void)playSoundIndefinitely:(unsigned int)a0 pauseDurationBetweenIterations:(double)a1;
- (void)stopPlaying;
- (void).cxx_destruct;
- (BOOL)isRepeatingActorPlaying;
- (BOOL)isCurrentPlaying;

@end
