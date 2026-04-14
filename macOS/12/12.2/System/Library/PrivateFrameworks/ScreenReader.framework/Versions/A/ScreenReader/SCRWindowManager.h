@class NSArray;

@interface SCRWindowManager : NSObject

@property (nonatomic) long long _focusedWindowIndex;
@property (copy, nonatomic) NSArray *_windowSwitchList;
@property (nonatomic) BOOL _systemDialogsDisplayed;

- (void).cxx_destruct;
- (void)updateSystemDialogBrailleStatusCell:(BOOL)a0;
- (void)checkSystemDialogBrailleStatusCell;
- (id)systemDialogs;
- (id)_currentWindowList;
- (void)_resetFocusedWindowIndexWithFocusedWindow:(id)a0;
- (void)_reorderWindowSwitchListWithFocusedWindow:(id)a0 previousFocusedWindow:(id)a1;
- (void)_switchToNextWindow;
- (id)_systemDialogs:(BOOL)a0;
- (void)_startSystemDialogReminderTimer;
- (void)_checkSystemDialogs:(id)a0;
- (void)_validateSystemDialogReminderTimer:(id)a0;
- (void)_notifySystemDialogs:(long long)a0;
- (void)switchWindow;
- (void)initializeSystemDialogReminder;

@end
