@class NSArray, LUI2Window, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface LUI2MultiWindowController : NSObject {
    char _isVisible;
    long long _backgroundViewStyle;
    LUI2Window *_mainWindow;
    NSMutableDictionary *_secondaryWindows;
    NSMutableArray *_animationCompletions;
    NSObject<OS_dispatch_source> *_displayReconfigurationTimer;
    NSObject<OS_dispatch_source> *_prepareWindowsTimer;
    id _wallpaperLockedAssertion;
}

@property (readonly) NSArray *windows;
@property (readonly) LUI2Window *mainWindow;
@property char animate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)showWindows;
- (void)_applyBackgroundViewControllersForWindows:(id /* block */)a0;
- (void)_applyWindows:(id /* block */)a0;
- (void)_displaysDidReconfigure;
- (void)_displaysWillReconfigure;
- (void)_hideWindows:(char)a0 completion:(id /* block */)a1;
- (void)_setWindowVisibility:(char)a0 animate:(char)a1 completion:(id /* block */)a2;
- (void)_showWindows:(char)a0 completion:(id /* block */)a1;
- (void)_takeWallpaperPresentationAssertionWithCompletion:(id /* block */)a0;
- (void)_updateWindows;
- (void)hideWindows;
- (void)hideWindowsWithCompletion:(id /* block */)a0;
- (void)prepareWindowsWithCompletion:(id /* block */)a0;
- (void)setBackgroundImages:(id)a0;
- (void)setUsesDesktopLayer:(char)a0;
- (void)setUsesScreenSaver:(char)a0;
- (void)setWindowAlphaValues:(double)a0 animate:(char)a1;
- (void)setWindowLevels:(long long)a0;
- (void)showWindowsWithCompletion:(id /* block */)a0;
- (id)windowNumbers;

@end
