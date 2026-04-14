@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) EMMailboxObjectID *mailboxObjectID;

- (id)initWithCoder:(id)a0;
- (id)initWithMailbox:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxObjectID:(id)a0;

@end
