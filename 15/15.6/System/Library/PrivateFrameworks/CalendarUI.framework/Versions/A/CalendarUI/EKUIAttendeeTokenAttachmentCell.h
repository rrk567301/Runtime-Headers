@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell

@property char isExpanded;
@property char attendeeHasAddress;
@property char isOverAttendeeLimit;

- (void)setRepresentedObject:(id)a0;
- (id)textColor;
- (id)tokenTintColor;
- (char)shouldShowToken;
- (int)freeBusyType;
- (id)imageForRepresentedObject;
- (id)initCellForTokenField:(id)a0;
- (char)isCompletedToken;
- (id)stringForRepresentedObject;

@end
