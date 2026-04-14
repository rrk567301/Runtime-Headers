@class EMThreadCollectionItemID, NSString, EMThreadScope;

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable>

@property (readonly, nonatomic) EMThreadCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, copy, nonatomic) EMThreadScope *threadScope;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversationID:(long long)a0 threadScope:(id)a1;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;

@end
