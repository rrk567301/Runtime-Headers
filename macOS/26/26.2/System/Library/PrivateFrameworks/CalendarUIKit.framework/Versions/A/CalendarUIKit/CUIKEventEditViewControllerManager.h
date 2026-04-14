@class _TtC13CalendarUIKit34EventEditViewControllerManagerImpl, NSViewController;

@interface CUIKEventEditViewControllerManager : NSObject {
    _TtC13CalendarUIKit34EventEditViewControllerManagerImpl *_impl;
}

@property (readonly, nonatomic) NSViewController *viewController;

- (void)cancel;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (BOOL)hasAttachmentChanges;
- (void)save:(long long)a0 completion:(id /* block */)a1;
- (void)eventSetExternally:(id)a0 forceUpdate:(BOOL)a1;
- (id)initWithDelegate:(id)a0 isEditing:(BOOL)a1 allowsEditing:(BOOL)a2 needsInlineEditButton:(BOOL)a3;
- (void)updateCalendar:(id)a0;
- (void)attachmentChangedExternally;
- (void)attemptSaveWithCompletion:(id /* block */)a0;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (BOOL)hasModifiedAttendeesFromSuggestion;
- (void)inviteesChangedExternally;
- (BOOL)isDoneButtonEnabled;
- (id)precommitSerializedEvent;
- (void)setShouldRecordPrecommitEvent:(BOOL)a0;
- (BOOL)shouldRecordPrecommitEvent;
- (void)updateAllowsEditing:(BOOL)a0;
- (void)updateAttachmentDownloadProgressWithIdentifier:(id)a0 downloadProgress:(id)a1;
- (void)updateAttachmentStatusWithIdentifier:(id)a0 isLoading:(BOOL)a1;
- (void)updateCreationMethod:(unsigned long long)a0;
- (void)updateDisplayedSectionsForContraintsWithCalendar:(id)a0;
- (void)updateEKEventForDockedView;
- (void)updateFromReminderForEvent:(id)a0;
- (void)updateIsEditing:(BOOL)a0;
- (void)updateNeedsInlineEditButton:(BOOL)a0;
- (void)updateStartAndEndDates:(id)a0 end:(id)a1;

@end
