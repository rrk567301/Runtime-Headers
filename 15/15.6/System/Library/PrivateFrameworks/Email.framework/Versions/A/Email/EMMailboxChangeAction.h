@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) EMMailboxObjectID *mailboxObjectID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMailbox:(id)a0;
- (id)initWithMailboxObjectID:(id)a0;

@end
