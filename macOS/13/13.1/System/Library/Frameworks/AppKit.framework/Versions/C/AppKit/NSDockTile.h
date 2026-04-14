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
- (void)_dockTileScaleFactorChanged:(id)a0;
- (void)_reenableAppNap:(id)a0;
- (BOOL)_getDockContext:(struct CGContext **)a0 andSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)invalidateOwner;
- (void)_registerForDockScaleChangeNotification;
- (void)_unregisterForDockScaleChangeNotification;
- (void)_releaseDockContext;
- (BOOL)_hasCustomContent;
- (BOOL)_releaseContextIfEmpty;
- (void)_createFrameViewIfNeeded;
- (struct CGSize { double x0; double x1; })_getSizeFromDock;
- (void)_temporarilyDisableAppNap;
- (id)_tileImage;
- (id)_backstopView;
- (void)_updateDockWindowIDAndDisplayIfNeeded:(BOOL)a0;
- (void)_dockIsAlive:(BOOL)a0;
- (void)frameChanged:(id)a0;
- (id)miniView;
- (void)setMiniView:(id)a0;
- (void)_setMiniView:(long long)a0 contextid:(unsigned int)a1;
- (void)_setMiniViewShown:(BOOL)a0;
- (void)_setMiniViewWindowLevel:(long long)a0;
- (void)_miniViewResized;

@end
