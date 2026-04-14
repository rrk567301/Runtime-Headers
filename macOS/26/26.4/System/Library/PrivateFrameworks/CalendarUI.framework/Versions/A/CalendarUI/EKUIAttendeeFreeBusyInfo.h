@class EKUILocationTableCellView, EKUITokenAttachmentCell;

@interface EKUIAttendeeFreeBusyInfo : NSObject

@property (retain) EKUITokenAttachmentCell *cell;
@property int freeBusyType;
@property (retain) EKUILocationTableCellView *locationView;

- (void).cxx_destruct;
- (id)init;

@end
