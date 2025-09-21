@interface Calculate : NSObject

@property (class, readonly, nonatomic) BOOL is3DGraphingEnabled;

+ (void)_lock;
+ (void)_unlock;
+ (id)evaluate:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (void)_resetGlobals;
+ (id)evaluate:(id)a0 options:(id)a1;
+ (id)evaluate:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)evaluate:(id)a0 options:(id)a1 error:(id *)a2 needsUpdate:(BOOL *)a3;
+ (id)localizedSymbol:(id)a0 locale:(id)a1;
+ (id)scan:(id)a0 options:(id)a1;
+ (id)scan:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (id)scan:(id)a0 options:(id)a1 stop:(BOOL *)a2;

@end
