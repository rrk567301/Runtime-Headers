@class TURepeatingActor, TUConfigurationProvider, NSObject;
@protocol OS_dispatch_queue;

@interface TUSoundPlayer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;
@property (nonatomic) BOOL currentPlaying;
@property (readonly, nonatomic) TUConfigurationProvider *configurationProvider;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (BOOL)isRepeatingActorPlaying;
- (void)playSoundIndefinitely:(unsigned int)a0 pauseDurationBetweenIterations:(double)a1;
- (void).cxx_destruct;
- (void)setIsCurrentPlaying:(BOOL)a0;
- (void)playSound:(unsigned int)a0;
- (BOOL)isCurrentPlaying;
- (id)init;
- (void)stopPlaying;

@end
