@class EKUITitleGadget, EKUISubtitleGadget, NSArray, NSLayoutConstraint, EKUIHeaderImageView, EKUICalendarGadget;

@interface EKUITitleCalendarCompositeGadget : EKUICompositeGadget

@property (retain) EKUITitleGadget *titleGadget;
@property (retain) EKUICalendarGadget *calendarGadget;
@property (retain) EKUIHeaderImageView *headerImageView;
@property (retain) EKUISubtitleGadget *subtitleGadget;
@property (retain) NSArray *titleCalendarHorizontalConstraints;
@property (retain) NSArray *titleWithoutCalendarHorizontalConstraints;
@property (retain) NSLayoutConstraint *calendarGadgetCollapsedWidthConstraint;
@property (retain) NSLayoutConstraint *calendarGadgetMaxWidthConstraint;
@property (retain) NSLayoutConstraint *calendarGadgetPreferredWidthConstraint;

- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)performDragOperation:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)shouldBeFullWidth;
- (id)claimedPboardTypes;
- (void)selectTitleWithTrailingCursor:(BOOL)a0;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)subgadgets;

@end
