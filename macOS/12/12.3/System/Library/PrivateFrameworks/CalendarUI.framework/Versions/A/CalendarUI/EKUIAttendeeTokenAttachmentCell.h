@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell

@property BOOL isExpanded;
@property BOOL attendeeHasAddress;
@property BOOL isOverAttendeeLimit;

- (void)setRepresentedObject:(id)a0;
- (id)textColor;
- (id)tokenTintColor;
- (int)freeBusyType;
- (id)initCellForTokenField:(id)a0;
- (BOOL)shouldShowToken;
- (BOOL)isCompletedToken;
- (id)imageForRepresentedObject;
- (id)stringForRepresentedObject;

@end
