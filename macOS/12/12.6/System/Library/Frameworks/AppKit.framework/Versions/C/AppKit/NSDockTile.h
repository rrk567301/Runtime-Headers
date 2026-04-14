@class NSView, NSString;

@interface NSDockTile : NSObject {
    id _owner;
    void *_dockContextRef;
    NSView *_contentView;
    NSView *_frameView;
    NSView *_backstopView;
    NSString *_badgeLabel;
    struct { unsigned char showsAppBadge : 1; unsigned int reserved : 31; } _dFlags;
    struct CGSize { double width; double height; } _dockTileSize;
    id _miniViewController;
}

@property (retain) NSView *miniView;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (retain) NSView *contentView;
@property BOOL showsApplicationBadge;
@property (copy) NSString *badgeLabel;
@property (readonly, weak) id owner;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)display;
- (void)_dockIsAlive:(BOOL)a0;
- (id)_backstopView;
- (void)_updateDockWindowIDAndDisplayIfNeeded:(BOOL)a0;
- (void)invalidateOwner;
- (void)_setMiniViewShown:(BOOL)a0;
- (BOOL)_hasCustomContent;
- (void)_registerForDockScaleChangeNotification;
- (void)_dockTileScaleFactorChanged:(id)a0;
- (void)_releaseDockContext;
- (void)_unregisterForDockScaleChangeNotification;
- (BOOL)_getDockContext:(struct CGContext **)a0 andSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)_createFrameViewIfNeeded;
- (BOOL)_releaseContextIfEmpty;
- (void)_reenableAppNap:(id)a0;
- (void)_temporarilyDisableAppNap;
- (id)_tileImage;
- (void)_setMiniView:(long long)a0 contextid:(unsigned int)a1;
- (struct CGSize { double x0; double x1; })_getSizeFromDock;
- (void)frameChanged:(id)a0;
- (void)_miniViewResized;
- (id)miniView;
- (void)setMiniView:(id)a0;
- (void)_setMiniViewWindowLevel:(long long)a0;

@end
