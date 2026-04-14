@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (id)initWithCollectionItemID:(id)a0 mailboxScope:(id)a1;
- (id)initWithGlobalMessageID:(long long)a0 mailboxScope:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
