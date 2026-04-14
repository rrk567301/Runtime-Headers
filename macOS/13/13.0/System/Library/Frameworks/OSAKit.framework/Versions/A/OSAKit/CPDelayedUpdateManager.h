@class NSMutableSet;

@interface CPDelayedUpdateManager : NSObject {
    NSMutableSet *_updaters;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)applicationWillTerminate:(id)a0;
- (void)performDelayedUpdates;
- (void)cancelDelayedUpdate;
- (void)startDelayedUpdate;
- (void)addUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeUpdaterInfo:(id)a0;
- (void)removeUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
