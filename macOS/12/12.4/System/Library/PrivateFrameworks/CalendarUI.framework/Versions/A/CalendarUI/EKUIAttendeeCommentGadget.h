@class NSArray;

@interface EKUIAttendeeCommentGadget : EKUISingleTextFieldGadget

@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)refreshCachedProperties;
- (id)currentComments;

@end
