@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell

@property BOOL isExpanded;
@property BOOL attendeeHasAddress;
@property BOOL isOverAttendeeLimit;
@property BOOL isBlocked;

- (id)textColor;
- (void)setRepresentedObject:(id)a0;
- (id)tokenTintColor;
- (BOOL)shouldShowToken;
- (int)freeBusyType;
- (id)imagesForRepresentedObject;
- (id)initCellForTokenField:(id)a0;
- (BOOL)isCompletedToken;
- (id)stringForRepresentedObject;

@end
