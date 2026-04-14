@class NSTimer, NSMutableArray, LUI2Window;

@interface LUI2MultiWindowController : NSObject

@property (retain) NSMutableArray *windows;
@property (retain) NSTimer *displayChangeTimer;
@property BOOL registered;
@property BOOL anyUserLoggingOut;
@property (readonly) LUI2Window *mainWindow;

- (void)dealloc;
- (id)init;
- (void)setBackgroundColor:(id)a0;
- (void)showWindows;
- (void)_endDisplayChange:(id)a0;
- (void)_startOrUpdateDisplayReconfigurationTimer:(double)a0;
- (void)_beginDisplayChange;
- (void)_updateDisplayChange;
- (void)_displaysDidChange:(id)a0;
- (id)windowNumbers;
- (void)setUsesDesktopLayer:(BOOL)a0;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (void)_updateWindows;
- (void)hideWindows;
- (void)setWindowAlphaValues:(double)a0 animate:(BOOL)a1;
- (void)setWindowLevels:(long long)a0;
- (void)setBackgroundImages:(id)a0;

@end
