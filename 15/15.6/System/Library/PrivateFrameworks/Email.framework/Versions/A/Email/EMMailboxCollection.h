@class EMMailboxRepository;

@interface EMMailboxCollection : EMQueryingCollection <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) EMMailboxRepository *repository;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccount:(id)a0 topLevelOnly:(char)a1;
- (id)initWithAccount:(id)a0 topLevelOnly:(char)a1 repository:(id)a2;
- (id)initWithMailbox:(id)a0;
- (id)initWithMailbox:(id)a0 repository:(id)a1;
- (id)initWithObjectID:(id)a0 query:(id)a1;
- (void)setRepository:(id)a0;

@end
