@class NSArray, NSSet, NSString, STListData;

@interface STUIDataAccessStatusDomainData : NSObject <STStatusDomainData>

@property (readonly, copy, nonatomic) STListData *attributionListData;
@property (readonly, copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly, copy, nonatomic) NSSet *attributedEntities;
@property (readonly, copy, nonatomic) NSSet *executableIdentities;
@property (readonly, copy, nonatomic) NSSet *userIdentities;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *activeAttributionData;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithAttributionListData:(id)a0;
- (id)_initWithAttributionListData:(id)a0;
- (id)dataWithEntitiesThatAreSystemServices:(BOOL)a0;
- (id)dataWithAttributedEntity:(id)a0;
- (id)dataWithExecutableIdentity:(id)a0;
- (id)dataWithUserIdentity:(id)a0;
- (id)dataWithAccessType:(unsigned long long)a0;

@end
