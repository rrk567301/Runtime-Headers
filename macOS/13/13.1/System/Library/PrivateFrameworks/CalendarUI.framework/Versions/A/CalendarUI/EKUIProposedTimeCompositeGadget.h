@class NSArray, NSMutableArray;

@interface EKUIProposedTimeCompositeGadget : EKUICompositeGadget <EKUIProposedTimeActionHandler>

@property (retain) NSMutableArray *proposedTimeGadgets;
@property (retain) NSArray *existingConstraints;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (void)proposedTimeChildView:(id)a0 didAcceptInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)proposedTimeChildView:(id)a0 didDeclineInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)updateViewsForUpdatedEvent;
- (void)removeProposedTimeGadgetAtIndex:(unsigned long long)a0;
- (void)removeAllProposedTimeGadgets;
- (id)subgadgets;

@end
