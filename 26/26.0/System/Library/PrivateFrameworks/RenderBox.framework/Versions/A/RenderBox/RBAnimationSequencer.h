@class RBAnimationSequencerEffects;

@interface RBAnimationSequencer : NSObject {
    struct AnimationSequencer { int _distance_mode; unsigned int _flags; void /* unknown type, empty encoding */ _p0; void /* unknown type, empty encoding */ _p1; struct Effects { float _delay_offset; float _delay_scale; } _added; struct Effects { float _delay_offset; float _delay_scale; } _mixed; struct Effects { float _delay_offset; float _delay_scale; } _removed; } _seq;
}

@property (nonatomic) int distanceMode;
@property (nonatomic) BOOL sequencesGlyphs;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;
@property (copy, nonatomic) RBAnimationSequencerEffects *added;
@property (copy, nonatomic) RBAnimationSequencerEffects *removed;
@property (copy, nonatomic) RBAnimationSequencerEffects *mixed;

- (id).cxx_construct;

@end
