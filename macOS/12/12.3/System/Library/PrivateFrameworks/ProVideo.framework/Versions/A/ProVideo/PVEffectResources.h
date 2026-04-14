@interface PVEffectResources : NSObject

+ (void)applicationWillTerminate;
+ (void)cleanupEffectsCache;
+ (void)flushEngine;
+ (void)clearAllCachesAndPools;
+ (id)utObserver;
+ (void)cleanupEffectsSingletons;
+ (void)setInteractiveMode:(BOOL)a0;
+ (BOOL)isInteractiveMode;
+ (void)updateMemoryEnvironment:(int)a0;
+ (int)memoryEnvironment;
+ (void)shutdownEngine;
+ (void)setUTObserver:(id)a0;

@end
