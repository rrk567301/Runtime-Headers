@class CalPreferences;

@interface EKCalendarPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (retain) CalPreferences *calPreferences;
@property BOOL sharedCalendarNotificationsDisabled;
@property BOOL invitationNotificationsDisabled;
@property BOOL showDeclinedEventsEnabled;
@property BOOL timeToLeaveEnabled;

+ (id)calendarPreferences;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkedStateForCalendarWithUID:(id)a0 delegateID:(id)a1;
- (void)updateCheckedStateForCalendarWithUID:(id)a0 delegateID:(id)a1 state:(BOOL)a2;
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)a0 delegateID:(id)a1 state:(BOOL)a2 withKey:(id)a3 withNotification:(id)a4;
- (id)_disabledOrCollapsedItemsForDelegateID:(id)a0 withKey:(id)a1;
- (id)disabledCalendarsForDelegateWithUID:(id)a0;
- (id)_keyForDelegateID:(id)a0;
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)a0 key:(id)a1;
- (void)_updateDisplayOrderForSources:(id)a0 key:(id)a1;
- (id)disabledCalendarsForMainWindow;
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)a0 state:(BOOL)a1;
- (BOOL)expandedStateForTopLevelNodeWithUID:(id)a0;
- (BOOL)_checkedStateForDisabledOrCollapsedItemWithUID:(id)a0 delegateID:(id)a1 withKey:(id)a2;
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)a0;
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)a0;
- (id)displayOrderForAccounts;
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)a0;
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)a0;

@end
