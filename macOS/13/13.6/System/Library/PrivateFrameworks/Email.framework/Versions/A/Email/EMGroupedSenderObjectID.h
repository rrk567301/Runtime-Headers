@class NSString, EMGroupedSenderCollectionItemID, EMThreadScope;

@interface EMGroupedSenderObjectID : EMObjectID <EMCollectionItemID>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMGroupedSenderCollectionItemID *collectionItemID;
@property (readonly, copy, nonatomic) NSString *simpleAddress;
@property (readonly, copy, nonatomic) EMThreadScope *filteredMailboxScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionItemID:(id)a0 filteredMailboxScope:(id)a1;
- (id)initWithSimpleAddress:(id)a0 filteredMailboxScope:(id)a1;

@end
