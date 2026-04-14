@class NSArray;

@interface EKUIAttendeeCommentGadget : EKUISingleTextFieldGadget

@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (id)currentComments;
- (void)refreshCachedProperties;

@end
