@interface SCRNotificationCenterApplication : SCRApplication

@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsSiriVisible:) long long _currentNumberOfTimesCheckingSiriIsVisible;
@property (nonatomic) BOOL shouldIgnoreKeyboardFocusChangeEvents;

- (BOOL)isHidden;
- (void)_contentsChanged;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOnFaceTimeWindowContent;
- (void)applicationDidInitialize;
- (BOOL)isShowingSiriOrFaceTimeWindow;
- (void)applicationWillInvalidate;
- (BOOL)isNotificationCenterApplication;
- (void)elementWasDestroyed:(id)a0;
- (BOOL)applicationNeedsWindows;
- (void)dispatchBuildGuide:(id)a0 forType:(long long)a1 isApplicationFocused:(BOOL)a2 wait:(double)a3;
- (void)_startHandlingKeyboardFocusChangeEvents;
- (void)_ncaSetupObservers;
- (void)_ncaTeardownObservers;
- (void)_announceNotification:(id)a0;
- (void)_contentsChangedWithDelay:(id)a0;
- (void)_handleAnnouncementForUIElement:(id)a0;
- (void)notificationCenterFocusBackOnApplication;
- (void)_ignoreKeyboardFocusChangeEventsForNotificationCenterTableWindow;
- (void)_replaceNotificationCenterTitleWithSiriTitleForRequest:(id)a0;
- (void)_updateNotificationsGuide:(id)a0 isInLockScreenValue:(id)a1;
- (void)_focusOnTalkToSiriButton;
- (void)_focusOnFaceTimeWindowContent;
- (void)_toggleNotificationCenter;
- (id)_buildNotificationCenterGuide;
- (id)_findDescendantWithClassPath:(id)a0;
- (id)_menubar;
- (void)_focusOnTalkToSiriButtonAfterDelay;
- (void)dispatchUpdateNotificationsGuide:(id)a0 isInLockScreen:(BOOL)a1;
- (void)dispatchFocusOnTalkToSiriButton;
- (void)dispatchToggleNotificationCenter;
- (id)dispatchMenubar;

@end
