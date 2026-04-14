@class NSArray, NSMutableArray;

@interface EKUIAttendeeCommentCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *commentGadgets;
@property (retain) NSMutableArray *existingConstraints;
@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)needsExpansion;
- (BOOL)updateWithDiff:(id)a0;
- (id)addCommentGadget;
- (void)refreshCachedProperties;
- (BOOL)shouldDisplay;
- (id)subgadgets;

@end
