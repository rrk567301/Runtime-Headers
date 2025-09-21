@class NSArray, NSMutableArray;

@interface EKUIAttendeeCommentCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *commentGadgets;
@property (retain) NSMutableArray *existingConstraints;
@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (BOOL)updateWithDiff:(id)a0;
- (id)addCommentGadget;
- (void)refreshCachedProperties;
- (BOOL)shouldDisplay;
- (id)subgadgets;

@end
