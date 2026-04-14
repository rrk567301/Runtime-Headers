@interface _TearOffTabWindow : NSTearOffTabWindow

@property (nonatomic) BOOL canDetachTab;

- (void)_setWindowTag;
- (BOOL)_wantsFullScreenTileDropTargets;
- (BOOL)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;

@end
