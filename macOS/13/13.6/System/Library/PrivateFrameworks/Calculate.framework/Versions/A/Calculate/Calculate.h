@interface Calculate : NSObject

+ (void)_lock;
+ (void)_unlock;
+ (id)evaluate:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (void)_resetGlobals;
+ (id)evaluate:(id)a0 options:(id)a1;
+ (id)evaluate:(id)a0 options:(id)a1 needsUpdate:(BOOL *)a2;

@end
