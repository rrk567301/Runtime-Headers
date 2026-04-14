@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell

@property BOOL isExpanded;
@property BOOL attendeeHasAddress;
@property BOOL isOverAttendeeLimit;

- (void)setRepresentedObject:(id)a0;
- (id)textColor;
- (id)tokenTintColor;
- (id)initCellForTokenField:(id)a0;
- (BOOL)shouldShowToken;
- (int)freeBusyType;
- (id)imageForRepresentedObject;
- (id)stringForRepresentedObject;
- (BOOL)isCompletedToken;

@end
