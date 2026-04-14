@interface NSCGSSpace : NSObject {
    unsigned long long _spaceID;
    unsigned char _flags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finishedResizeRect;
    unsigned int _companionWindowID;
    double _companionWindowOffset;
}

@property (readonly) unsigned long long spaceID;

+ (id)spaceWithSpaceID:(unsigned long long)a0;
+ (void)addMenuBarRevealChangedNotificationHandler:(id /* block */)a0;
+ (void)addTileResizeNotificationHandler:(id /* block */)a0;
+ (void)performSpaceResizeBarrier:(id /* block */)a0;
+ (void)setMenuBarSettings:(id)a0 globalSettings:(id)a1;
+ (void)switchToAppSpaceIfNeeded;
+ (unsigned long long)defaultSpaceForConnection;
+ (void)invalidateSpaceBindings;
+ (id)allManagedSpaces;
+ (id)currentManagedSpaces;
+ (id)allUnmanagedSpaces;

- (void)dealloc;
- (id)initWithSpaceID:(unsigned long long)a0;
- (void)finishedResizeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ackImmediately:(BOOL)a1;
- (void)setMenuBarCompanionWindow:(unsigned int)a0 offset:(double)a1;
- (void)clientDrivenMoveSpacersToPoint:(struct CGPoint { double x0; double x1; })a0 verticalIndex:(unsigned long long)a1 horizontalIndex:(unsigned long long)a2 options:(unsigned long long)a3 fenceRight:(struct _mach_right_send { unsigned int x0; })a4;
- (void)moveSpacersForSize:(struct CGSize { double x0; double x1; })a0 fenceRight:(struct _mach_right_send { unsigned int x0; })a1;

@end
