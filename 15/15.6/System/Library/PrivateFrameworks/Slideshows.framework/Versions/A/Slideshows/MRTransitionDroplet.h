@interface MRTransitionDroplet : MRTransition {
    float mAmplitude;
    char mUseLighting;
}

- (id)initWithTransitionID:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
