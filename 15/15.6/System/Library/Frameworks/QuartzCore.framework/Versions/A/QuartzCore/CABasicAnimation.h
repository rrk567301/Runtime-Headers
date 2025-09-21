@interface CABasicAnimation : CAPropertyAnimation

@property char roundsToInteger;
@property double startAngle;
@property double endAngle;
@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;

+ (id)CA_attributes;

- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (char)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (double)_timeFunction:(double)a0;

@end
