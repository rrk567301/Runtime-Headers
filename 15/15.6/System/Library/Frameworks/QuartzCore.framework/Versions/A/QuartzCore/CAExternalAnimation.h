@interface CAExternalAnimation : CAPropertyAnimation

@property (readonly) unsigned long long animId;
@property (copy) id /* block */ presentationBlock;

+ (id)animationWithKeyPath:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (char)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (void)setAnimId:(unsigned long long)a0;

@end
