@class NSArray;

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 flagChange:(id)a2 origin:(long long)a3 actor:(long long)a4;

@end
