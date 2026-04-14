@class NSObject;
@protocol NSAnimatablePropertyContainer;

@interface _NSObjectAnimator : NSProxy {
    NSObject<NSAnimatablePropertyContainer> *_target;
}

+ (Class)_animatorClassForTargetClass:(Class)a0;

- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithTarget:(id)a0;
- (id)valueForKey:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)animator;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (Class)class;
- (Class)superclass;

@end
