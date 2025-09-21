@interface _TearOffTabWindow : NSTearOffTabWindow

@property (nonatomic) char canDetachTab;

- (char)_wantsFullScreenTileDropTargets;
- (char)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (void)_setWindowTag;

@end
