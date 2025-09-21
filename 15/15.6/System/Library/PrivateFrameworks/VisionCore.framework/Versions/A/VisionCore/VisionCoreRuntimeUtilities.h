@interface VisionCoreRuntimeUtilities : NSObject

+ (char)linkTimeOrRunTimeBeforeVersion:(int)a0;
+ (int)linkTimeVersion;
+ (void)enumerateSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1 usingBlock:(id /* block */)a2;
+ (char)item:(id)a0 overridesClassSelector:(SEL)a1;
+ (char)item:(id)a0 overridesSelector:(SEL)a1;
+ (char)linkTimeOrRunTimeAtLeastVersion:(int)a0;
+ (int)runTimeVersion;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1 overridingClassSelector:(SEL)a2;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1 overridingSelector:(SEL)a2;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1 overridingClassSelector:(SEL)a2;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(char)a1 overridingSelector:(SEL)a2;
+ (id)signatureForItem:(id)a0 selector:(SEL)a1;

@end
