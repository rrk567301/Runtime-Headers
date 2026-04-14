@interface RemindersUICore.TTRMReminderCellMenuItemController : NSObject <NSMenuItemValidation, NSObject> {
    void /* unknown type, empty encoding */ indentOutdentConfigurationProvider;
    void /* unknown type, empty encoding */ indentOutdentHandler;
    void /* unknown type, empty encoding */ flaggedConfigurationProvider;
    void /* unknown type, empty encoding */ setFlaggedHandler;
    void /* unknown type, empty encoding */ priorityConfigurationProvider;
    void /* unknown type, empty encoding */ setPriorityLevelHandler;
    void /* unknown type, empty encoding */ postponementConfigurationProvider;
    void /* unknown type, empty encoding */ postponeHandler;
    void /* unknown type, empty encoding */ hashtagConfigurationProvider;
    void /* unknown type, empty encoding */ addOrRemoveHashtagHandler;
    void /* unknown type, empty encoding */ startEditingStructuredHashtagHandler;
    void /* unknown type, empty encoding */ clearAllHashtagsHandler;
    void /* unknown type, empty encoding */ assigneeConfigurationProvider;
    void /* unknown type, empty encoding */ setAssigneeHandler;
    void /* unknown type, empty encoding */ canDelete;
    void /* unknown type, empty encoding */ deleteHandler;
    void /* unknown type, empty encoding */ itemsForMenuItemActions;
}

- (BOOL)validateMenuItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)canSetPriority:(id)a0;
- (void)updatePriority:(id)a0;
- (void)assignReminder:(id)a0;
- (void)addHashtagToReminder:(id)a0;
- (void)addHashtagToSelectedReminder:(id)a0;
- (void)clearTagsInSelectedReminders:(id)a0;
- (void)createAndStartEditingNewStructuredHashtagInSelectedReminder:(id)a0;
- (void)indentItem:(id)a0;
- (void)outdentItem:(id)a0;
- (void)postponeSelection:(id)a0;
- (void)postponeSelectionToNone:(id)a0;
- (void)postponeSelectionToStartOfWeekday:(id)a0;
- (void)postponeSelectionToToday:(id)a0;
- (void)postponeSelectionToTomorrow:(id)a0;
- (void)postponeSelectionToWeekend:(id)a0;
- (void)toggleFlagged:(id)a0;

@end
