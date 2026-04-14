@class CAMediaTimingFunction;

@interface SCNTransaction : NSObject

@property (class, nonatomic) double animationDuration;
@property (class, copy, nonatomic) CAMediaTimingFunction *animationTimingFunction;
@property (class, nonatomic) BOOL disableActions;
@property (class, copy, nonatomic) id /* block */ completionBlock;

+ (void)lock;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)unlock;
+ (id)valueForKey:(id)a0;
+ (void)commit;
+ (void)begin;
+ (void)flush;
+ (unsigned int)currentState;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 applyBlock:(id /* block */)a2;
+ (BOOL)immediateMode;
+ (void)setImmediateMode:(BOOL)a0;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 keyPath:(id)a2 applyBlock:(id /* block */)a3;
+ (void)commitImmediate;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 key:(id)a2 applyBlock:(id /* block */)a3;
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene { } *)a0;
+ (struct __C3DScene { } *)immediateModeRestrictedContext;
+ (void)enqueueCommandForObject:(id)a0 immediateTransactionBlock:(id /* block */)a1;
+ (void)checkUncommittedTransactions;

- (void)lock;
- (void)unlock;
- (void)commit;
- (void)begin;
- (void)flush;
- (BOOL)disableActions;
- (void)setDisableActions:(BOOL)a0;
- (void)setAnimationDuration:(double)a0;
- (void)setAnimationTimingFunction:(id)a0;
- (double)animationDuration;
- (id)animationTimingFunction;

@end
