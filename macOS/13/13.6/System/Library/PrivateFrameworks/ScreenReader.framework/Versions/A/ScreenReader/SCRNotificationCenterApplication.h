@interface SCRNotificationCenterApplication : SCRApplication

@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsSiriVisible:) long long _currentNumberOfTimesCheckingSiriIsVisible;
@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsFaceTimeVisible:) long long _currentNumberOfTimesCheckingFaceTimeIsVisible;
@property (nonatomic) BOOL shouldIgnoreKeyboardFocusChangeEvents;

- (BOOL)isHidden;
- (void)_contentsChanged;
- (void)dispatchFocusOnTalkToSiriButton;
- (id)dispatchMenubar;
- (BOOL)isNotificationCenterApplication;
- (void)_announceNotification:(id)a0;
- (id)_buildNotificationCenterGuide;
- (void)_contentsChangedWithDelay:(id)a0;
- (id)_findDescendantWithClassPath:(id)a0;
- (void)_focusOnFaceTimeWindowContent;
- (void)_focusOnTalkToSiriButton;
- (void)_focusOnTalkToSiriButtonAfterDelay;
- (void)_handleAnnouncementForUIElement:(id)a0;
- (void)_handleEscapeEvent;
- (void)_ignoreKeyboardFocusChangeEventsForNotificationCenterTableWindow;
- (id)_isShowingNotificationCenter;
- (id)_menubar;
- (void)_ncaSetupObservers;
- (void)_ncaTeardownObservers;
- (void)_replaceNotificationCenterTitleWithSiriTitleForRequest:(id)a0;
- (id)_siriElementToInitiallyFocus;
- (void)_startHandlingKeyboardFocusChangeEvents;
- (void)_toggleNotificationCenter;
- (void)_updateNotificationsGuide:(id)a0 isInLockScreenValue:(id)a1;
- (void)applicationDidInitialize;
- (BOOL)applicationNeedsWindows;
- (void)applicationWillInvalidate;
- (void)dispatchBuildGuide:(id)a0 forType:(long long)a1 isApplicationFocused:(BOOL)a2 wait:(double)a3;
- (void)dispatchHandleEscapeEvent;
- (BOOL)dispatchIsShowingNotificationCenter;
- (void)dispatchToggleNotificationCenter;
- (void)dispatchUpdateNotificationsGuide:(id)a0 isInLockScreen:(BOOL)a1;
- (void)elementWasDestroyed:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOnFaceTimeWindowContent;
- (BOOL)isShowingSiriOrFaceTimeWindow;
- (void)notificationCenterFocusBackOnApplication;
- (id)siriPanelElement;

@end
