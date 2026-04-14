@class PPTController, NSString, NSTouchBar, NSObject, AppControllerTouchBarProvider;

@interface BrowserApplication : NSApplication <AppControllerTouchBarProviderDelegate, NSTouchBarProvider> {
    BOOL _isClosingAllWindows;
    BOOL _isDockBouncingSuppressed;
    NSObject *_terminateSender;
    SEL _currentAction;
    AppControllerTouchBarProvider *_touchBarProvider;
    PPTController *_pptController;
}

@property (nonatomic, getter=isTryingToTerminate) BOOL tryingToTerminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (id)init;
- (void).cxx_destruct;
- (id)nextEventMatchingMask:(unsigned long long)a0 untilDate:(id)a1 inMode:(id)a2 dequeue:(BOOL)a3;
- (id)targetForAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)terminate:(id)a0;
- (id)makeWindowsPerform:(SEL)a0 inOrder:(BOOL)a1;
- (void)sendEvent:(id)a0;
- (void)finishLaunching;
- (struct _NSModalSession { } *)beginModalSessionForWindow:(id)a0;
- (void)endModalSession:(struct _NSModalSession { } *)a0;
- (long long)requestUserAttention:(unsigned long long)a0;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (id)orderedWindows;
- (BOOL)sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (BOOL)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
- (void)orderFrontStandardAboutPanel:(id)a0;
- (void)_applicationWillTerminate:(id)a0;
- (SEL)currentAction;
- (void)closeAllWindows:(id)a0;
- (void)setDockBouncingSuppressed:(BOOL)a0;
- (void)tryToCloseAllWindows;
- (void)tryToTerminate;
- (BOOL)anyWindowsVisible;
- (BOOL)isDockBouncingSuppressed;
- (void)createNewWindowFromTouchBarProvider:(id)a0;
- (void)createNewPrivateBrowsingWindowFromTouchBarProvider:(id)a0;
- (BOOL)isClosingAllWindows;

@end
