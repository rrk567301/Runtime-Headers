@class NSView, EKEvent, NSDate, NSArray, EKUIShowMoreOptionView, NSStackView, EKInviteeAlternativeTimeSearcher, EKUIProposedTimeDateTimeGadget, NSString, CalUIControlView, EKUINewTimeOptionView;

@interface EKUINewTimeOptionsGadget : EKUISingleViewGadget <EKUINewTimeOptionViewDelegate, EKUIShowMoreOptionViewDelegate>

@property (retain) CalUIControlView *container;
@property (retain) EKUIProposedTimeDateTimeGadget *proposedTimeDateTimeGadget;
@property (retain) NSStackView *containerStackView;
@property (retain) NSStackView *allInviteesStackView;
@property (retain) NSStackView *someInviteesStackView;
@property (retain) EKUINewTimeOptionView *currentProposedTimeOptionView;
@property (retain) NSView *latestViewInAllInviteesStackView;
@property (retain) NSView *latestViewInSomeInviteesStackView;
@property (retain) EKUIShowMoreOptionView *allInviteesShowMoreView;
@property (retain) EKUIShowMoreOptionView *someInviteesShowMoreView;
@property unsigned long long numAllAttendeesCanAttend;
@property unsigned long long numSomeAttendeesCanAttend;
@property unsigned long long lastSelectedRow;
@property (nonatomic) BOOL hasAvailabilityResults;
@property (nonatomic) BOOL hasError;
@property (retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (retain) EKEvent *lastSearchedEvent;
@property (retain) NSDate *currentProposedStartDate;
@property (retain) NSArray *allInviteeTimes;
@property (retain) NSArray *someInviteeTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (id)control;
- (void)_refreshIfNeeded;
- (BOOL)shouldDisplay;
- (BOOL)shouldBeFullWidth;
- (void)updateWithChanges:(id)a0;
- (void)selectAlternativeTimeView:(id)a0;
- (void)showMoreOptionsForView:(id)a0;
- (void)setupViews;
- (void)updateAvailabilityResults;
- (void)updateAvailabilityResultsToError;
- (BOOL)canShowAdditionalAllInviteeTime;
- (BOOL)canShowAdditionalSomeInviteeTime;
- (void)_updateShowMoreVisibilityOnShowMoreView:(id)a0 inStackView:(id)a1;
- (void)showAdditionalAllInviteeTime;
- (void)showAdditionalSomeInviteeTime;
- (id)_createNewTimeOptionViewWithAlternativeTime:(id)a0;
- (void)_searcherStateChanged:(long long)a0;
- (BOOL)_proposalDateIsEqual:(id)a0;

@end
