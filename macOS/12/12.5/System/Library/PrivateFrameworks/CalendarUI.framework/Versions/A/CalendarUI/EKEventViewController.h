@class EKUITitleCalendarCompositeGadget, EKUIGadget, EKUIStartTimeGadget, EKUILocationGadget, EKDiff, EKUIGadgetContainer, EKUIProposedTimeCompositeGadget, EKUIThreeButtonGadget, EKUIAttendeesGadget, CalUIEventViewTouchBar, EKEvent, NSString;

@interface EKEventViewController : EKViewController <CalUIEventViewTouchBarDelegate>

@property (retain) EKUIGadgetContainer *titleLocationContainer;
@property (retain) EKUITitleCalendarCompositeGadget *titleGadget;
@property (retain) EKUILocationGadget *locationGadget;
@property (retain) EKUIProposedTimeCompositeGadget *proposedTimeCompositeGadget;
@property (retain) EKUIGadgetContainer *dateTimeContainer;
@property (retain) EKUIStartTimeGadget *startTimeGadget;
@property (retain) EKUIGadget *attachmentGadget;
@property (retain) EKUIGadget *urlGadget;
@property (retain) EKUIAttendeesGadget *attendeesGadget;
@property (retain) EKUIGadget *notesGadget;
@property (retain) EKUIThreeButtonGadget *sendRevertGadget;
@property (retain) EKUIThreeButtonGadget *addIgnoreGadget;
@property (retain) EKUIThreeButtonGadget *unsubscribeGadget;
@property (retain) CalUIEventViewTouchBar *eventViewTouchBar;
@property long long numOccurrencesSelected;
@property BOOL footerVisible;
@property (retain) EKDiff *diffFromCommitted;
@property BOOL isProposedEvent;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newPlaceholderTitleString;
+ (id)emptyPlaceholderTitleString;

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (id)makeTouchBar;
- (id)initWithSettings:(id)a0;
- (void)makeFirstResponder;
- (BOOL)shouldDisplayURLS;
- (void)deleteEvent;
- (void)cancelProposedEvent;
- (void)updateContainersWithChanges:(id)a0;
- (void)updateSuddenTerminationWithNewEvent:(id)a0;
- (void)firstResponderChanged:(id)a0;
- (void)_updateTouchBarFirstResponder:(id)a0;
- (void)dateTimeFormatChanged;
- (BOOL)_settingsAreIncompatibleWithTouchBar;
- (BOOL)saveCompleteChangeWithImpliedCommitDecision:(BOOL)a0;
- (BOOL)commitFromCommitButton:(BOOL)a0 shouldClose:(BOOL *)a1;
- (id)oldEvent:(id)a0 didUpdateTo:(id)a1;
- (id)oldObject:(id)a0 didUpdateTo:(id)a1;
- (void)setLastSnapshottedObject:(id)a0;
- (id)writableCalendars;
- (void)moveToCalendar:(id)a0;
- (BOOL)inspectorIsOpen;
- (id)yupButtonTitle;
- (id)nopeButtonTitle;
- (void)yupButtonPressed;
- (void)nopeButtonPressed;
- (void)toggleInspector;
- (BOOL)shouldShowInspectorFields;
- (id)locationCandidateTouchBar;
- (id)inviteesCandidateTouchBar;
- (void)selectInspectorLocation;
- (void)selectInspectorDateTime;
- (void)selectInspectorInvitees;
- (void)datePickerIsChanging;
- (void)datePickerChanged;
- (void)respondWithStatus:(long long)a0;
- (void)reportJunk;
- (void)selectTitleText;
- (void)selectTitleTextWithTrailingCursor;
- (BOOL)shouldDisplayAttachments;
- (void)updateWithChangesFromEvent:(id)a0;
- (BOOL)hasUnsentChanges;
- (BOOL)proposedEvent;

@end
