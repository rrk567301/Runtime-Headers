@class NSArray;

@interface EKUIAttendeeCommentGadget : EKUISingleTextFieldGadget

@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)isEditable;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (id)currentComments;
- (void)refreshCachedProperties;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
