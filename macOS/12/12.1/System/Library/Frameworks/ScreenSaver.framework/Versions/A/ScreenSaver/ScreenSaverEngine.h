@class NSString, ScreenSaverModule, NSMutableArray;

@interface ScreenSaverEngine : NSResponder <NSWindowDelegate, NSFileManagerDelegate, NSApplicationDelegate> {
    ScreenSaverModule *_module;
    NSMutableArray *_windows;
    NSMutableArray *_savers;
    NSString *_commandLineModuleName;
    BOOL _mainOnly;
    BOOL _isRunning;
    BOOL _runFromPref;
    BOOL _blackSaver;
    BOOL _faded;
    BOOL _atLoginWindow;
    BOOL _windowMode;
    BOOL _noEarlyMouseCheck;
    int _numWindows;
    int _retCode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mouseAllowedRect;
    struct CGPoint { double x; double y; } _startingMousePoint;
    BOOL _keyEventTerminated;
    unsigned int _fadeToken;
    struct CGPoint { double x; double y; } _endingMousePoint;
    BOOL _performGammaFade;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; int x1; } *_cornerList;
    long long _cornerListCnt;
    id _delegate;
    unsigned long long _ssSpaceID;
    NSMutableArray *_ssSpaceArray;
    NSString *_uuidString;
}

@property (readonly) int retCode;
@property (readonly, getter=isRunning) BOOL running;
@property BOOL runFromPref;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)tabletPoint:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)applicationDidResignActive:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)keyDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)_cancelKey:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)swipeWithEvent:(id)a0;
- (void)beginGestureWithEvent:(id)a0;
- (void)_setupCornerShapes;
- (int)_stateForMousePosition:(struct CGPoint { double x0; double x1; })a0 mask:(unsigned int)a1;
- (void)startScreenSaver:(BOOL)a0;
- (void)reallyStopScreenSaver:(id)a0;
- (void)_stopSaver:(BOOL)a0;
- (void)_addMyselfToPermittedFrontASNList;
- (id)_defaultModuleForLoginWindow;
- (id)_incompatibleArchitectureModuleForModuleName:(id)a0;
- (void)stopScreenSaver:(BOOL)a0;
- (id)_initAndGetModule;
- (void)_timedHideCursor;
- (void)_performFadeWithMode:(int)a0 time:(float)a1;
- (id)_windowForSaver:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backingStoreType:(unsigned long long)a2;
- (id)_saverFromModule:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_resetTrackingRects;
- (void)screenSaverEngineDaemonStarted:(id)a0;
- (void)mouseEventToInteractiveSavers:(id)a0;
- (BOOL)_mouseInteractivityEnabled;
- (void)clearMouseMovedOrigin;
- (void)pauseScreenSaver;
- (void)unpauseScreenSaver;
- (void)readjustDisplays;
- (void)hidEventReceived;

@end
