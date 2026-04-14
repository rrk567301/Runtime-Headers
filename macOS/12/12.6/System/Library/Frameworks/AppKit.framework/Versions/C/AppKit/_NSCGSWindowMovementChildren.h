@class NSMutableSet, NSMutableOrderedSet;

@interface _NSCGSWindowMovementChildren : NSObject {
    NSMutableOrderedSet *_windowsToAdd;
    NSMutableSet *_windowsToRemove;
}

- (void)dealloc;
- (id)init;
- (void)removeWindow:(id)a0;
- (void)addWindow:(id)a0;
- (void)setWindows:(id)a0;
- (id)windowsForWindow:(id)a0;
- (void)commitForWindow:(id)a0;

@end
