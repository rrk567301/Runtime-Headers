@class EMGroupedSenderCollectionItemID, EMThreadScope;
@protocol ECEmailAddressConvertible;

@interface EMGroupedSenderObjectID : EMObjectID

@property (readonly, nonatomic) EMGroupedSenderCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long businessID;
@property (readonly, copy, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly, nonatomic) EMThreadScope *threadScope;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBusinessID:(long long)a0 threadScope:(id)a1;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;

@end
