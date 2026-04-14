@interface NSCGSSpace : NSObject

@property (readonly) unsigned long long spaceID;

+ (void)_fenceChangesOnPort:(unsigned int)a0;
+ (void)addMenuBarRevealChangedNotificationHandler:(id /* block */)a0;
+ (void)addTileResizeNotificationHandler:(id /* block */)a0;
+ (void)performSpaceResizeBarrier:(id /* block */)a0;
+ (id)spaceWithSpaceID:(unsigned long long)a0;
+ (id)allManagedSpaces;
+ (id)currentManagedSpaces;
+ (id)allUnmanagedSpaces;

- (void)finishedResizeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ackImmediately:(BOOL)a1;
- (void)setMenuBarCompanionWindow:(unsigned int)a0 offset:(double)a1;
- (void)clientDrivenMoveSpacersToPoint:(struct CGPoint { double x0; double x1; })a0 verticalIndex:(unsigned long long)a1 horizontalIndex:(unsigned long long)a2 options:(unsigned long long)a3 fencePort:(unsigned int)a4;
- (void)moveSpacersForSize:(struct CGSize { double x0; double x1; })a0 fencePort:(unsigned int)a1;

@end
