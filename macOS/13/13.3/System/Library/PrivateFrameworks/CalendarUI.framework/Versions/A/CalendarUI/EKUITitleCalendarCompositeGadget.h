@class EKUITitleGadget, EKUISubtitleGadget, NSArray, NSLayoutConstraint, EKUICalendarGadget;

@interface EKUITitleCalendarCompositeGadget : EKUICompositeGadget

@property (retain) EKUITitleGadget *titleGadget;
@property (retain) EKUICalendarGadget *calendarGadget;
@property (retain) EKUISubtitleGadget *subtitleGadget;
@property (retain) NSArray *titleCalendarHorizontalConstraints;
@property (retain) NSArray *titleWithoutCalendarHorizontalConstraints;
@property (retain) NSLayoutConstraint *calendarGadgetCollapsedWidthConstraint;
@property (retain) NSLayoutConstraint *calendarGadgetMaxWidthConstraint;
@property (retain) NSLayoutConstraint *calendarGadgetPreferredWidthConstraint;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)updateConstraints;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)claimedPboardTypes;
- (void)selectTitleWithTrailingCursor:(BOOL)a0;
- (BOOL)shouldBeFullWidth;
- (id)subgadgets;

@end
