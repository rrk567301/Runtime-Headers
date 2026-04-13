@class NSWindow, NSArray, NSMutableArray, NSScreen;

@interface NSWindowSidecarMenuController : NSObject

@property (retain) NSMutableArray *targetScreens;
@property (retain) NSArray *targetIPads;
@property (retain) NSScreen *iPadScreen;
@property (weak) NSWindow *window;
@property (retain) id screenNotificationToken;
@property (readonly) BOOL isOnIPad;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadData;
- (void)_toggleIPad:(id)a0;
- (BOOL)zoomToScreenWithDisplayID:(long long)a0;
- (void)requestZoomToDisplayID:(long long)a0;
- (void)moveToIPad:(id)a0;
- (id)imageForIPad:(id)a0;
- (id)labelForIPad:(id)a0;

@end
