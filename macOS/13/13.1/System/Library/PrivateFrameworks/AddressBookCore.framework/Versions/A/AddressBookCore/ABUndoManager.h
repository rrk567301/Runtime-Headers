@class NSMutableArray;

@interface ABUndoManager : NSUndoManager {
    BOOL _inCreationUndoGrouping;
    BOOL _checkpointSet;
    NSMutableArray *_commandTargetsSinceCheckpoint;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (id)makeUndoManager;

- (void)dealloc;
- (id)init;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)beginCreationUndoGrouping;
- (void)endCreationUndoGrouping;
- (void)setNonCreationActionName:(id)a0;
- (void)setCheckpoint;
- (void)clearCheckpoint;
- (void)removeCommandsSinceCheckpoint;

@end
