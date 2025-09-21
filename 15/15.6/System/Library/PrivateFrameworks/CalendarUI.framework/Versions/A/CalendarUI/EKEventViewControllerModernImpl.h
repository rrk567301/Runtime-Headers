@class EKEvent, NSString, CUIKEditingContext, CUIKEventEditViewControllerManager;
@protocol CUIKEditor, EKViewWindowControllerPrivate, EKViewApplicationDelegate, EKHidePopover, EKTransmogrificationDelegate;

@interface EKEventViewControllerModernImpl : NSViewController <CUIKEventEditViewControllerManagerDelegate, EKEventViewControllerImpl> {
    CUIKEventEditViewControllerManager *_vcManager;
}

@property (readonly, nonatomic) id<CUIKEditor> editorForViewControllerManager;
@property (readonly, nonatomic) EKEvent *eventForViewControllerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKViewWindowControllerPrivate> windowController;
@property (weak) id<EKViewApplicationDelegate> applicationDelegate;
@property (weak, nonatomic) id<EKTransmogrificationDelegate> transmogrificationDelegate;
@property char isProposedEvent;
@property (readonly) CUIKEditingContext *editingContext;
@property (retain, nonatomic) EKEvent *event;
@property (weak) id<EKHidePopover> presentingPopoverController;
@property char isReadOnly;
@property char useDynamicSpacing;
@property long long numOccurrencesSelected;

+ (long long)preferredWidth;

- (void).cxx_destruct;
- (char)isActive;
- (char)commitEditingAndReturnError:(id *)a0;
- (void)loadView;
- (id)initWithSettings:(id)a0;
- (void)revert;
- (void)makeFirstResponder;
- (char)isSaving;
- (void)selectTitleText;
- (char)closeAndCommit;
- (void)commitObject;
- (void)deleteEvent;
- (void)deleteObject;
- (void)gotoNextRecurrence;
- (void)gotoPreviousRecurrence;
- (char)hasUnsentChanges;
- (id)menuItemsForRecurrenceDifference;
- (void)recalculateMaxHeight;
- (unsigned long long)recurrenceDifferenceCount;
- (void)requestLocationOrVideoCallPresentation;
- (char)saveCompleteChange;
- (void)selectInspectorDateTime;
- (void)selectInspectorInvitees;
- (void)selectInspectorLocation;
- (void)setDelegateWindowController:(id)a0;
- (void)updateAllContainers;
- (void)updateWithChangesFromEvent:(id)a0;

@end
