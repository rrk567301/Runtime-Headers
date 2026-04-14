@interface SCRNotificationCenterApplication : SCRApplication

@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsSiriVisible:) long long _currentNumberOfTimesCheckingSiriIsVisible;
@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsFaceTimeVisible:) long long _currentNumberOfTimesCheckingFaceTimeIsVisible;
@property (nonatomic) BOOL shouldIgnoreKeyboardFocusChangeEvents;

- (BOOL)isHidden;
- (void)_contentsChanged;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (void)elementWasDestroyed:(id)a0;
- (void)dispatchBuildGuide:(id)a0 forType:(long long)a1 isApplicationFocused:(BOOL)a2 wait:(double)a3;
- (BOOL)applicationNeedsWindows;
- (void)_startHandlingKeyboardFocusChangeEvents;
- (void)_announceNotification:(id)a0;
- (void)_contentsChangedWithDelay:(id)a0;
- (void)_updateNotificationsGuide:(id)a0 isInLockScreenValue:(id)a1;
- (void)_focusOnTalkToSiriButton;
- (void)_focusOnFaceTimeWindowContent;
- (void)_handleEscapeEvent;
- (void)_toggleNotificationCenter;
- (id)_buildNotificationCenterGuide;
- (id)_isShowingNotificationCenter;
- (id)_menubar;
- (void)_focusOnTalkToSiriButtonAfterDelay;
- (BOOL)isNotificationCenterApplication;
- (void)_ncaSetupObservers;
- (void)_ncaTeardownObservers;
- (void)_handleAnnouncementForUIElement:(id)a0;
- (void)notificationCenterFocusBackOnApplication;
- (void)dispatchUpdateNotificationsGuide:(id)a0 isInLockScreen:(BOOL)a1;
- (void)dispatchFocusOnTalkToSiriButton;
- (void)focusOnFaceTimeWindowContent;
- (void)dispatchHandleEscapeEvent;
- (void)dispatchToggleNotificationCenter;
- (BOOL)dispatchIsShowingNotificationCenter;
- (BOOL)isShowingSiriOrFaceTimeWindow;
- (id)siriPanelElement;
- (id)dispatchMenubar;
- (void)_ignoreKeyboardFocusChangeEventsForNotificationCenterTableWindow;
- (void)_replaceNotificationCenterTitleWithSiriTitleForRequest:(id)a0;
- (id)_siriElementToInitiallyFocus;
- (id)_findDescendantWithClassPath:(id)a0;

@end
