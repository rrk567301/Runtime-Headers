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
- (void)_startListeningForNotifications;
- (void)_beginDisplayChange;
- (void)_displaysDidChange:(id)a0;
- (void)_endDisplayChange:(id)a0;
- (void)_startOrUpdateDisplayReconfigurationTimer:(double)a0;
- (void)_stopListeningForNotifications;
- (void)_updateDisplayChange;
- (void)_updateWindows;
- (void)hideWindows;
- (void)setBackgroundImages:(id)a0;
- (void)setUsesDesktopLayer:(BOOL)a0;
- (void)setWindowAlphaValues:(double)a0 animate:(BOOL)a1;
- (void)setWindowLevels:(long long)a0;
- (id)windowNumbers;

@end
