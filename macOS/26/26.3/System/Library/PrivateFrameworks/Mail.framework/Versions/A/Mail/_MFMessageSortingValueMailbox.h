@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue

@property (retain, nonatomic) MFMailbox *mailbox;

- (id)description;
- (void)dealloc;

@end
