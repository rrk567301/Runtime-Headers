@interface QCSCN_Transaction : NSObject

+ (void)commit;
+ (id /* block */)completionBlock;
+ (void)unlock;
+ (void)begin;
+ (void)setCompletionBlock:(id /* block */)a0;
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
+ (id)propertyKeys;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (void)enableImmediateMode:(BOOL)a0;
+ (id)jsInstance;
+ (void)postCommandWithContext:(void *)a0 object:(id)a1 commandID:(unsigned long long)a2 arguments:(void *)a3 keyPath:(id)a4 canCollapse:(BOOL)a5 applyFunction:(void /* function */ *)a6;
+ (Class)typeForProperty:(id)a0;

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
- (id)propertyKeys;

@end
