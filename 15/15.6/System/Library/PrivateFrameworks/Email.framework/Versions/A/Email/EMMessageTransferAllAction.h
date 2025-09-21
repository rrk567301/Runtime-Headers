@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 destinationMailbox:(id)a2 copyMessages:(char)a3 origin:(long long)a4 actor:(long long)a5;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 specialDestinationMailboxType:(long long)a2 flagChange:(id)a3 copyMessages:(char)a4 origin:(long long)a5 actor:(long long)a6;

@end
