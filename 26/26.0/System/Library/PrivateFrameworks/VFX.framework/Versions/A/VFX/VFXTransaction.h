@class VFXTimingFunction;

@interface VFXTransaction : NSObject

@property (class, nonatomic) double duration;
@property (class, copy, nonatomic) VFXTimingFunction *timingFunction;
@property (class, nonatomic) double beginTime;
@property (class, copy, nonatomic) id /* block */ completionBlock;

+ (void)commit;
+ (void)unlock;
+ (void)begin;
+ (unsigned int)currentState;
+ (void)setAnimationDuration:(double)a0;
+ (void)lock;
+ (id)valueForKey:(id)a0;
+ (void)flush;
+ (double)animationDuration;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (id)animationTimingFunction;
+ (BOOL)disableActions;
+ (void)setAnimationTimingFunction:(id)a0;
+ (void)setDisableActions:(BOOL)a0;
+ (void)commitImmediate;
+ (void)checkUncommittedTransactions;
+ (void)enqueueCommandForObject:(id)a0 immediateTransactionBlock:(id /* block */)a1;
+ (BOOL)immediateMode;
+ (struct __CFXWorld { } *)immediateModeRestrictedContext;
+ (BOOL)setImmediateMode:(BOOL)a0;
+ (void)setImmediateModeRestrictedContext:(struct __CFXWorld { } *)a0;
+ (void)performPresentationObjectQueriesInWorld:(id)a0 usingBlock:(id /* block */)a1;
+ (void)setImmediateModeWithAtomicTime:(double)a0;
+ (void)postCommandAvoidingImmediateModeWithWorldRef:(void *)a0 applyBlock:(id /* block */)a1;
+ (void)postCommandWithObject:(id)a0 applyBlock:(id /* block */)a1;
+ (void)postCommandWithObject:(id)a0 key:(id)a1 applyBlock:(id /* block */)a2;
+ (void)postCommandWithObject:(id)a0 key:(id)a1 subscriptIndex:(unsigned long long)a2 derivedKeyPath:(id)a3 applyBlock:(id /* block */)a4;
+ (void)postCommandWithObject:(id)a0 key:(id)a1 subscriptKey:(id)a2 derivedKeyPath:(id)a3 applyBlock:(id /* block */)a4;
+ (void)postCommandWithObject:(id)a0 keyPath:(id)a1 applyBlock:(id /* block */)a2;
+ (void)postCommandWithWorldRef:(void *)a0 applyBlock:(id /* block */)a1;
+ (void)postReleaseCommandWithCFXObject:(void *)a0;
+ (void)setAnimationDurationAsFloat:(float)a0;
+ (void)setCurrentThreadImmediateMode:(BOOL)a0;

- (void)commit;
- (void)unlock;
- (void)begin;
- (void)setAnimationDuration:(double)a0;
- (void)lock;
- (void)flush;
- (double)animationDuration;
- (id)animationTimingFunction;
- (BOOL)disableActions;
- (void)setAnimationTimingFunction:(id)a0;
- (void)setDisableActions:(BOOL)a0;

@end
