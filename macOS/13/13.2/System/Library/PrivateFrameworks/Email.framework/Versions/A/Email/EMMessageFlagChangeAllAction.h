@class NSArray;

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 flagChange:(id)a2;

@end
