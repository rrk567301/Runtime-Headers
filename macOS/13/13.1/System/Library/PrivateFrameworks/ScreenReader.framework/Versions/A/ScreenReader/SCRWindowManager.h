@class NSArray;

@interface SCRWindowManager : NSObject

@property (nonatomic) long long _focusedWindowIndex;
@property (copy, nonatomic) NSArray *_windowSwitchList;
@property (nonatomic) BOOL _systemDialogsDisplayed;

- (void).cxx_destruct;
- (void)_checkSystemDialogs:(id)a0;
- (void)switchWindow;
- (id)_currentWindowList;
- (void)_resetFocusedWindowIndexWithFocusedWindow:(id)a0;
- (void)_reorderWindowSwitchListWithFocusedWindow:(id)a0 previousFocusedWindow:(id)a1;
- (void)_switchToNextWindow;
- (id)systemDialogs;
- (id)_systemDialogs:(BOOL)a0;
- (void)initializeSystemDialogReminder;
- (void)updateSystemDialogBrailleStatusCell:(BOOL)a0;
- (void)checkSystemDialogBrailleStatusCell;
- (void)_startSystemDialogReminderTimer;
- (void)_validateSystemDialogReminderTimer:(id)a0;
- (void)_notifySystemDialogs:(long long)a0;

@end
