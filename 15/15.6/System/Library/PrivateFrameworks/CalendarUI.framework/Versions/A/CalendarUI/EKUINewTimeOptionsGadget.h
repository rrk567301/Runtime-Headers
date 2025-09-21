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
@property (nonatomic) char hasAvailabilityResults;
@property (nonatomic) char hasError;
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
- (char)isEditable;
- (double)maxHeight;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)_refreshIfNeeded;
- (char)canShowAdditionalAllInviteeTime;
- (id)_createNewTimeOptionViewWithAlternativeTime:(id)a0 index:(long long)a1;
- (char)_proposalDateIsEqual:(id)a0;
- (void)_searcherStateChanged:(long long)a0;
- (void)_updateShowMoreVisibilityOnShowMoreView:(id)a0 inStackView:(id)a1;
- (char)canShowAdditionalSomeInviteeTime;
- (void)selectAlternativeTimeView:(id)a0;
- (void)setupViews;
- (char)shouldBeFullWidth;
- (char)shouldDisplay;
- (void)showAdditionalAllInviteeTime;
- (void)showAdditionalSomeInviteeTime;
- (void)showMoreOptionsForView:(id)a0;
- (void)updateAvailabilityResults;
- (void)updateAvailabilityResultsToError;
- (void)updateWithChanges:(id)a0;

@end
