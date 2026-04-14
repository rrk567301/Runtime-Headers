@interface TSCH3DSharegroupToken : NSObject

+ (id)interactiveCanvas;
+ (id)sharegroupPool;
+ (id)sharegroupMapWithDevice:(id)a0;
+ (id)glExport;

- (BOOL)isOneShot;
- (BOOL)mustRunOnMainThread;
- (BOOL)forceGL;
- (id)targetThreadForFlushingWithOwningThread:(id)a0;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)shouldGarbageCollect;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)hasInterestForDiscreteGraphics;

@end
