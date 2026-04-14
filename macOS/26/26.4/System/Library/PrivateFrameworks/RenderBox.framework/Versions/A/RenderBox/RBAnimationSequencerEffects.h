@interface RBAnimationSequencerEffects : NSObject {
    struct Effects { float _delay_offset; float _delay_scale; } _effects;
}

@property (nonatomic) float delayOffset;
@property (nonatomic) float delayScale;

- (id).cxx_construct;

@end
