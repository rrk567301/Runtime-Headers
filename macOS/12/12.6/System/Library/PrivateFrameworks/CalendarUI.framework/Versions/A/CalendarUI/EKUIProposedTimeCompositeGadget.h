@class NSArray, NSMutableArray;

@interface EKUIProposedTimeCompositeGadget : EKUICompositeGadget <EKUIProposedTimeActionHandler>

@property (retain) NSMutableArray *proposedTimeGadgets;
@property (retain) NSArray *existingConstraints;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (double)preferredWidth;
- (void)updateConstraints;
- (BOOL)needsExpansion;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (void)updateViewsForUpdatedEvent;
- (id)subgadgets;
- (void)removeAllProposedTimeGadgets;
- (void)removeProposedTimeGadgetAtIndex:(unsigned long long)a0;
- (void)proposedTimeChildView:(id)a0 didAcceptInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)proposedTimeChildView:(id)a0 didDeclineInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;

@end
