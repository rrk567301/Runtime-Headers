@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithGlobalMessageID:(long long)a0 mailboxScope:(id)a1;
- (id)initWithCollectionItemID:(id)a0 mailboxScope:(id)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
