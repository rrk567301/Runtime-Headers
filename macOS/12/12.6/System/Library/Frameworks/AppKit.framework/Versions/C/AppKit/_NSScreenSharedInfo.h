@class NSDictionary, NSCGSDisplayConfiguration, NSCGSDock;

@interface _NSScreenSharedInfo : NSObject {
    NSCGSDock *_dock;
    BOOL _isUpdating;
    NSDictionary *_localizedNameCache;
    NSDictionary *_menuBarHeightsByDisplayID;
}

@property (retain, setter=_setDock:) NSCGSDock *_dock;
@property (retain, setter=_setMenuBarHeights:) NSDictionary *_menuBarHeights;
@property (readonly, copy) NSCGSDisplayConfiguration *displayConfiguration;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dockRect;
@property (readonly) unsigned int dockOrientation;
@property (readonly) BOOL dockIsHidden;
@property (readonly) unsigned int systemUIMode;
@property (readonly) unsigned int systemUIOptions;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)localizedNameForDisplay:(id)a0;
- (id)menuBarHeightsForDisplay:(id)a0;
- (id)_initForUpdating;
- (void)_setDisplayConfiguration:(id)a0;
- (void)_setSystemUIMode:(unsigned int)a0;
- (void)_setSystemUIOptions:(unsigned int)a0;
- (id)_copyForUpdating;
- (void)_finishUpdating;

@end
