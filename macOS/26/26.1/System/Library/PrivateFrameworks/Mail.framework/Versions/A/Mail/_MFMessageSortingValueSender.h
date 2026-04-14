@class NSString;

@interface _MFMessageSortingValueSender : MFMessageSortingValue

@property (copy, nonatomic) NSString *senderDisplayName;

- (id)description;
- (void)dealloc;

@end
