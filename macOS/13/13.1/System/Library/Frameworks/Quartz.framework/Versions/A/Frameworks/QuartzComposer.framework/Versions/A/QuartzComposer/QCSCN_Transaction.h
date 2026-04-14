@interface QCSCN_Transaction : NSObject

+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)lock;
+ (void)unlock;
+ (id)valueForKey:(id)a0;
+ (void)commit;
+ (id /* block */)completionBlock;
+ (void)setCompletionBlock:(id /* block */)a0;
+ (void)begin;
+ (void)setDisableActions:(BOOL)a0;
+ (unsigned int)currentState;
+ (void)setAnimationTimingFunction:(id)a0;
+ (void)setAnimationDuration:(double)a0;
+ (BOOL)disableActions;
+ (void)flush;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (id)propertyKeys;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (Class)typeForProperty:(id)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (void)enableImmediateMode:(BOOL)a0;
+ (void)postCommandWithContext:(void *)a0 object:(id)a1 commandID:(unsigned long long)a2 arguments:(void *)a3 keyPath:(id)a4 canCollapse:(BOOL)a5 applyFunction:(void /* function */ *)a6;
+ (id)jsInstance;

- (void)lock;
- (void)unlock;
- (void)commit;
- (void)begin;
- (void)setDisableActions:(BOOL)a0;
- (void)setAnimationTimingFunction:(id)a0;
- (void)setAnimationDuration:(double)a0;
- (BOOL)disableActions;
- (void)flush;
- (double)animationDuration;
- (id)animationTimingFunction;
- (id)propertyKeys;

@end
