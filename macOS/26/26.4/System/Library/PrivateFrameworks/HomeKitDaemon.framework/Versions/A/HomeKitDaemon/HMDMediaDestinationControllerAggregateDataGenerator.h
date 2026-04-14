@class NSUUID;
@protocol HMDMediaDestinationControllerAggregateDataGeneratorDataSource;

@interface HMDMediaDestinationControllerAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>

@property (readonly, copy) NSUUID *identifier;
@property (weak) id<HMDMediaDestinationControllerAggregateDataGeneratorDataSource> dataSource;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)availableDestinationIdentifiersForDestinationControllerData:(id)a0 destinations:(id)a1 groups:(id)a2;
- (id)generatorDataWithCurrentGeneratorData:(id)a0;
- (id)homeTheaterSystemForDestinationControllerData:(id)a0 generatorData:(id)a1;
- (id)nameForAccessoryUUID:(id)a0;
- (id)rootDestinationIdentifierForLeafDestinationIdentifier:(id)a0 destinations:(id)a1 groups:(id)a2;
- (id)sameRoomAccessoryUUIDsForDestinationControllerData:(id)a0;
- (id)validDestinationIdentifierForDestinationControllerData:(id)a0 inDestinations:(id)a1;

@end
