@class NSSet, AFMyriadGoodnessScoreOverrideContext;

@interface AFMyriadGoodnessScoreContext : NSObject {
    AFMyriadGoodnessScoreOverrideContext *_overriddenContext;
}

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setOverridingContext:(id)a0;
- (id)getOverridingContext;

@end
