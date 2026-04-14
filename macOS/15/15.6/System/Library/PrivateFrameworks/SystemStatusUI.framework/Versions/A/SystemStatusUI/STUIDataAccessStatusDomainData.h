@class NSArray;

@interface STUIDataAccessStatusDomainData : STDataAccessStatusDomainData

@property (readonly, copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *activeAttributionData;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *unsatisfiedMinimumOnTimeAttributionData;

- (id)dataWithAccessType:(unsigned long long)a0;
- (id)dataWithAttributedEntity:(id)a0;
- (id)dataWithEntitiesThatAreSystemServices:(BOOL)a0;
- (id)dataWithExecutableIdentity:(id)a0;
- (id)dataWithUserIdentity:(id)a0;

@end
