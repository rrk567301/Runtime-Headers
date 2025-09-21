@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString *keyPath;
@property (getter=isAdditive) char additive;
@property (getter=isCumulative) char cumulative;
@property (retain) CAValueFunction *valueFunction;

+ (id)animationWithKeyPath:(id)a0;

- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (char)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (char)additive;
- (char)cumulative;

@end
