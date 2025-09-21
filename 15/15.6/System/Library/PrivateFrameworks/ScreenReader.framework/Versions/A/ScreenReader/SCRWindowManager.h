@class NSArray;

@interface SCRWindowManager : NSObject

@property (nonatomic) long long _focusedWindowIndex;
@property (copy, nonatomic) NSArray *_windowSwitchList;
@property (nonatomic) char _systemDialogsDisplayed;

- (void).cxx_destruct;
- (void)_startSystemDialogReminderTimer;
- (id)_systemDialogs:(char)a0;
- (void)_checkSystemDialogs:(id)a0;
- (id)_currentWindowList;
- (void)_notifySystemDialogs:(long long)a0;
- (void)_reorderWindowSwitchListWithFocusedWindow:(id)a0 previousFocusedWindow:(id)a1;
- (void)_resetFocusedWindowIndexWithFocusedWindow:(id)a0;
- (void)_switchToNextWindow;
- (void)_validateSystemDialogReminderTimer:(id)a0;
- (void)checkSystemDialogBrailleStatusCell;
- (void)initializeSystemDialogReminder;
- (void)switchWindow;
- (id)systemDialogs;
- (void)updateSystemDialogBrailleStatusCell:(char)a0;

@end
