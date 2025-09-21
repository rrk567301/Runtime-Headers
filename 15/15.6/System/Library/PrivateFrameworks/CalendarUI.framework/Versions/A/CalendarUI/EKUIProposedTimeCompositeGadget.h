@class NSArray, NSMutableArray;

@interface EKUIProposedTimeCompositeGadget : EKUICompositeGadget <EKUIProposedTimeActionHandler>

@property (retain) NSMutableArray *proposedTimeGadgets;
@property (retain) NSArray *existingConstraints;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (char)needsExpansion;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (char)updateWithDiff:(id)a0;
- (void)proposedTimeChildView:(id)a0 didAcceptInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)proposedTimeChildView:(id)a0 didDeclineInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)removeAllProposedTimeGadgets;
- (void)removeProposedTimeGadgetAtIndex:(unsigned long long)a0;
- (char)shouldDisplay;
- (id)subgadgets;
- (void)updateViewsForUpdatedEvent;

@end
