@class NSArray, NSMutableArray;

@interface EKUIProposedTimeCompositeGadget : EKUICompositeGadget <EKUIProposedTimeActionHandler>

@property (retain) NSMutableArray *proposedTimeGadgets;
@property (retain) NSArray *existingConstraints;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)preferredWidth;
- (BOOL)needsExpansion;
- (BOOL)updateWithDiff:(id)a0;
- (void)proposedTimeChildView:(id)a0 didAcceptInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)proposedTimeChildView:(id)a0 didDeclineInGadgetIndex:(unsigned long long)a1 withProposingAttendee:(id)a2;
- (void)removeAllProposedTimeGadgets;
- (void)removeProposedTimeGadgetAtIndex:(unsigned long long)a0;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateViewsForUpdatedEvent;

@end
