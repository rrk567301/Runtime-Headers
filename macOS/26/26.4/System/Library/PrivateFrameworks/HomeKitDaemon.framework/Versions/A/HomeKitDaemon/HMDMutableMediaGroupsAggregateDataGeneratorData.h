@class NSArray;

@interface HMDMutableMediaGroupsAggregateDataGeneratorData : HMDMediaGroupsAggregateDataGeneratorData

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;
@property (copy) NSArray *generatedMediaSystemDestinationIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
