@class NSObject;
@protocol NSAnimatablePropertyContainer;

@interface _NSObjectAnimator : NSProxy {
    NSObject<NSAnimatablePropertyContainer> *_target;
}

+ (Class)_animatorClassForTargetClass:(Class)a0;

- (id)animator;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithTarget:(id)a0;
- (id)valueForKey:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (Class)class;
- (Class)superclass;

@end
