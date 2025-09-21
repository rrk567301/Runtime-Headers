@class NSString;
@protocol VKAnimationRunner;

@interface VKAnimation : NSObject {
    id<VKAnimationRunner> _runner;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) char running;
@property (nonatomic) char runsForever;
@property (nonatomic) float frequency;
@property (readonly, nonatomic) char hasFrequency;
@property (nonatomic) double duration;
@property (readonly, nonatomic) char timed;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopAnimation:(char)a0;
- (id)initWithPriority:(long long)a0;
- (id)initWithPriority:(long long)a0 name:(id)a1;
- (void)onTimerFired:(double)a0;
- (void)startWithRunner:(id)a0;
- (void)transferToRunner:(id)a0;

@end
