@class NSArray;

@interface FetchRequestPropertiesDescriptor : NSCoder <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *groupByProperties;
@property (readonly, nonatomic) NSArray *aggregateProperties;
@property (readonly, nonatomic) NSArray *fetchProperties;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAggregateProperty:(id)a0;
- (void)addFetchProperty:(id)a0;
- (void)addGroupByProperty:(id)a0;
- (id)initWithCoder:(id)a0 GroupByProperties:(id)a1 aggregateProperties:(id)a2 fetchProperties:(id)a3;

@end
