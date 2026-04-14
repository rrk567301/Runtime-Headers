@class EMGroupedSenderCollectionItemID, EMThreadScope;
@protocol ECEmailAddressConvertible;

@interface EMGroupedSenderObjectID : EMObjectID

@property (readonly, nonatomic) EMGroupedSenderCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long businessID;
@property (readonly, copy, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly, nonatomic) EMThreadScope *threadScope;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBusinessID:(long long)a0 threadScope:(id)a1;

@end
