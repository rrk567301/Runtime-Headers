@class PPTController, NSString, NSTouchBar, NSObject, AppControllerTouchBarProvider;

@interface BrowserApplication : NSApplication <ASSavedAccountContextProviding, AppControllerTouchBarProviderDelegate, NSTouchBarProvider> {
    char _isClosingAllWindows;
    char _isDockBouncingSuppressed;
    NSObject *_terminateSender;
    SEL _currentAction;
    AppControllerTouchBarProvider *_touchBarProvider;
    long long _activeWindowRestorationCount;
    char _sentDidBeginTerminationNotification;
    PPTController *_pptController;
}

@property (readonly, nonatomic, getter=isRestoringWindows) char restoringWindows;
@property (nonatomic, getter=isTryingToTerminate) char tryingToTerminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (id)init;
- (void).cxx_destruct;
- (void)finishLaunching;
- (void)_applicationWillTerminate:(id)a0;
- (char)_globalCanQuietAndSafeQuit;
- (short)_handleAEQuit;
- (void)_setShouldRestoreStateOnNextLaunch:(char)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (struct _NSModalSession { } *)beginModalSessionForWindow:(id)a0;
- (void)endModalSession:(struct _NSModalSession { } *)a0;
- (id)makeWindowsPerform:(SEL)a0 inOrder:(char)a1;
- (id)nextEventMatchingMask:(unsigned long long)a0 untilDate:(id)a1 inMode:(id)a2 dequeue:(char)a3;
- (void)orderFrontStandardAboutPanel:(id)a0;
- (id)orderedWindows;
- (long long)requestUserAttention:(unsigned long long)a0;
- (char)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
- (char)runTest:(id)a0 options:(id)a1;
- (char)sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)sendEvent:(id)a0;
- (id)targetForAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)terminate:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (SEL)currentAction;
- (void)_reportSafariBlockingQuitReason;
- (void)_sendDidBeginTerminationNotification;
- (char)anyWindowsVisible;
- (void)closeAllWindows:(id)a0;
- (void)createNewPrivateBrowsingWindowFromTouchBarProvider:(id)a0;
- (void)createNewWindowFromTouchBarProvider:(id)a0;
- (char)isClosingAllWindows;
- (char)isDockBouncingSuppressed;
- (id)savedAccountContextForWebPageID:(unsigned long long)a0;
- (void)setDockBouncingSuppressed:(char)a0;
- (void)tryToCloseAllWindows;
- (void)tryToTerminate;

@end
