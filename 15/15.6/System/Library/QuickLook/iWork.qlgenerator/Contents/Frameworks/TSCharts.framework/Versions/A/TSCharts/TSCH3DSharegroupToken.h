@interface TSCH3DSharegroupToken : NSObject

+ (id)exportToken;
+ (id)interactiveCanvas;
+ (id)sharegroupMapWithDevice:(id)a0;
+ (id)sharegroupPool;

- (char)isOneShot;
- (char)canBeCreatedFromOtherThread;
- (char)mustRunOnMainThread;
- (char)shouldClearCurrentContextOnOwnerChange;
- (char)shouldGarbageCollect;
- (id)targetThreadForFlushingWithOwningThread:(id)a0;

@end
