@class NSArray, NSMutableArray;

@interface EKUIAttendeeCommentCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *commentGadgets;
@property (retain) NSMutableArray *existingConstraints;
@property char cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (char)needsExpansion;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (char)updateWithDiff:(id)a0;
- (id)addCommentGadget;
- (void)refreshCachedProperties;
- (char)shouldDisplay;
- (id)subgadgets;

@end
