@class NSArray;

@interface HMDMediaGroupsAggregateDataGeneratorData : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;
@property (copy) NSArray *generatedMediaSystemDestinationIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)mutableDataCopy;
- (id)immutableDataCopy;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1 groups:(id)a2;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1 groups:(id)a2 generatedMediaSystemDestinationIdentifiers:(id)a3;

@end
