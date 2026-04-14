@interface VNRuntimeUtilities : NSObject

+ (int)linkTimeVersion;
+ (BOOL)linkTimeOrRunTimeBeforeVersion:(int)a0;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;
+ (BOOL)class:(Class)a0 overridesClassSelector:(SEL)a1;
+ (void)enumerateSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;
+ (BOOL)linkTimeOrRunTimeAtLeastVersion:(int)a0;
+ (BOOL)object:(id)a0 overridesSelector:(SEL)a1;
+ (int)runTimeVersion;
+ (id)subclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 passingTest:(id /* block */)a2;

@end
