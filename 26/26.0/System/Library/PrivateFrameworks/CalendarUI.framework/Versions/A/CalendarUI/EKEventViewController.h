@class NSString, EKEvent, CUIKEditingContext, NSViewController;
@protocol EKEventViewControllerImpl, EKViewWindowControllerPrivate, EKViewApplicationDelegate, EKHidePopover, EKTransmogrificationDelegate;

@interface EKEventViewController : NSViewController {
    NSViewController<EKEventViewControllerImpl> *_impl;
}

@property (readonly) CUIKEditingContext *editingContext;
@property (weak, nonatomic) id<EKViewWindowControllerPrivate> windowController;
@property (weak) id<EKViewApplicationDelegate> applicationDelegate;
@property (weak, nonatomic) id<EKTransmogrificationDelegate> transmogrificationDelegate;
@property BOOL isProposedEvent;
@property (weak, nonatomic) NSString *canvasViewName;
@property long long numOccurrencesSelected;
@property (weak) id<EKHidePopover> presentingPopoverController;
@property BOOL isReadOnly;
@property BOOL useDynamicSpacing;
@property (retain, nonatomic) EKEvent *event;

+ (long long)preferredWidth;
+ (id)newPlaceholderTitleString;

- (void)loadView;
- (void)revert;
- (id)initWithSettings:(id)a0;
- (BOOL)isActive;
- (BOOL)isSaving;
- (void).cxx_destruct;
- (void)makeFirstResponder;
- (void)selectTitleText;
- (void)updateCalendarAppFirstDayOfWeek;
- (BOOL)closeAndCommit;
- (void)commitObject;
- (void)deleteEvent;
- (void)deleteObject;
- (void)gotoNextRecurrence;
- (void)gotoPreviousRecurrence;
- (BOOL)hasUnsentChanges;
- (id)menuItemsForRecurrenceDifference;
- (void)recalculateMaxHeight;
- (unsigned long long)recurrenceDifferenceCount;
- (BOOL)saveCompleteChange;
- (void)selectInspectorDateTime;
- (void)selectInspectorInvitees;
- (void)selectInspectorLocation;
- (void)setDelegateWindowController:(id)a0;
- (void)setEventCreationMethod:(unsigned long long)a0;
- (void)updateAllContainers;
- (void)updateWithChangesFromEvent:(id)a0;

@end
