@protocol HMDMediaDestinationControllerAggregateDataGeneratorDataSource;

@interface HMDMediaDestinationControllerAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>

@property (weak) id<HMDMediaDestinationControllerAggregateDataGeneratorDataSource> dataSource;

- (void).cxx_destruct;
- (id)aggregateDataWithDestinations:(id)a0 controllers:(id)a1 groups:(id)a2;
- (id)availableDestinationIdentifiersForDestinationControllerData:(id)a0 destinations:(id)a1 groups:(id)a2;
- (id)rootDestinationIdentifierForLeafDestinationIdentifier:(id)a0 destinations:(id)a1 groups:(id)a2;
- (id)sameRoomAccessoryUUIDsForDestinationControllerData:(id)a0;
- (id)validDestinationIdentifierForDestinationControllerData:(id)a0 inDestinations:(id)a1;

@end
