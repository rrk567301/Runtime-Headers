@class NSViewController;

@interface CalendarUIKit.EventEditViewControllerManagerImpl : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ allowsEditing;
    void /* unknown type, empty encoding */ needsInlineEditButton;
    void /* unknown type, empty encoding */ eventCreationMethod;
    void /* unknown type, empty encoding */ hasViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewController;
}

@property (nonatomic, retain) NSViewController *viewController;

- (void)cancel;
- (id)init;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (BOOL)hasAttachmentChanges;
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
- (void)saveWithSpan:(long long)a0 completion:(id /* block */)a1;
- (void)setShouldRecordPrecommitEvent:(BOOL)a0;
- (BOOL)shouldRecordPrecommitEvent;
- (void)updateAllowsEditing:(BOOL)a0;
- (void)updateAttachmentDownloadProgressWithIdentifier:(id)a0 downloadProgress:(id)a1;
- (void)updateAttachmentStatusFor:(id)a0 isLoading:(BOOL)a1;
- (void)updateCreationMethod:(unsigned long long)a0;
- (void)updateDisplayedSectionsForContraintsWith:(id)a0;
- (void)updateEKEventForDockedView;
- (void)updateFromReminderFor:(id)a0;
- (void)updateIsEditing:(BOOL)a0;
- (void)updateNeedsInlineEditButton:(BOOL)a0;
- (void)updateStartAndEndDatesWithStart:(id)a0 end:(id)a1;

@end
