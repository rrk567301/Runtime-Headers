@interface QCSCN_Transaction : NSObject

+ (void)unlock;
+ (unsigned int)currentState;
+ (id /* block */)completionBlock;
+ (void)setCompletionBlock:(id /* block */)a0;
+ (id)valueForKey:(id)a0;
+ (void)flush;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)commit;
+ (void)begin;
+ (void)lock;
+ (double)animationDuration;
+ (void)setAnimationDuration:(double)a0;
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

- (void)unlock;
- (void)flush;
- (void)commit;
- (void)begin;
- (void)lock;
- (double)animationDuration;
- (void)setAnimationDuration:(double)a0;
- (id)animationTimingFunction;
- (BOOL)disableActions;
- (void)setAnimationTimingFunction:(id)a0;
- (void)setDisableActions:(BOOL)a0;
- (id)propertyKeys;

@end
