@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithCollectionItemID:(id)a0 mailboxScope:(id)a1;
- (id)description;
- (id)init;
- (id)initWithGlobalMessageID:(long long)a0 mailboxScope:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
