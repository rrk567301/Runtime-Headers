@class SCRElement;

@interface SCRNotificationCenterApplication : SCRApplication

@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsSiriVisible:) long long _currentNumberOfTimesCheckingSiriIsVisible;
@property (nonatomic, setter=_setCurrentNumberTimesCheckingIsFaceTimeVisible:) long long _currentNumberOfTimesCheckingFaceTimeIsVisible;
@property (retain, nonatomic) SCRElement *_lastExplicitlyFocusedElement;
@property (nonatomic) char shouldIgnoreKeyboardFocusChangeEvents;

- (void).cxx_destruct;
- (char)isHidden;
- (id)dispatchMenubar;
- (char)isNotificationCenterApplication;
- (void)_announceNotification:(id)a0;
- (id)_buildNotificationCenterGuide;
- (void)_contentsChanged;
- (void)_contentsChangedWithDelay:(id)a0;
- (void)_focusIntoNotificationsList;
- (void)_focusOnFaceTimeWindowContent;
- (void)_handleAnnouncementForUIElement:(id)a0;
- (void)_handleEscapeEvent;
- (void)_ignoreKeyboardFocusChangeEventsForNotificationCenterTableWindow;
- (id)_isShowingNotificationCenter;
- (id)_menubar;
- (void)_ncaSetupObservers;
- (void)_ncaTeardownObservers;
- (void)_notificationCenterDragToDesktop:(id)a0;
- (void)_notificationCenterNextFocus:(id)a0;
- (void)_replaceNotificationCenterTitleWithSiriTitleForRequest:(id)a0;
- (void)_startHandlingKeyboardFocusChangeEvents;
- (void)_toggleNotificationCenter;
- (unsigned long long)_totalNotificationCount;
- (void)_updateNotificationsGuide:(id)a0 isInLockScreenValue:(id)a1;
- (void)applicationDidInitialize;
- (char)applicationNeedsWindows;
- (void)applicationWillInvalidate;
- (void)dispatchBuildGuide:(id)a0 forType:(long long)a1 isApplicationFocused:(char)a2 wait:(double)a3;
- (void)dispatchHandleEscapeEvent;
- (char)dispatchIsShowingNotificationCenter;
- (void)dispatchToggleNotificationCenter;
- (void)dispatchUpdateNotificationsGuide:(id)a0 isInLockScreen:(char)a1;
- (void)elementWasDestroyed:(id)a0;
- (char)focusInto:(id)a0 event:(id)a1;
- (void)focusIntoNotificationsList;
- (void)focusOnFaceTimeWindowContent;
- (char)ignoreDragNotifications;
- (char)isShowingSiriOrFaceTimeWindow;
- (void)notificationCenterFocusBackOnApplication;
- (id)siriPanelElement;

@end
