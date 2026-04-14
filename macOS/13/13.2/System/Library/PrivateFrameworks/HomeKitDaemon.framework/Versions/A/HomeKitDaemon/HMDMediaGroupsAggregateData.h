@class NSArray;

@interface HMDMediaGroupsAggregateData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying>

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)encodeToProtoBufferData;
- (id)initWithProtoBufferData:(id)a0;
- (id)groupWithIdentifier:(id)a0;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1 groups:(id)a2;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1;
- (id)decodeDestinationsWithEncodedDestinations:(id)a0;
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)a0;
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)a0;
- (id)encodedDestinationEvents;
- (id)encodedDestinationControllerEvents;
- (id)encodedMediaGroupEvents;
- (id)sentinelIdentifier;
- (id)sentinelDestinationControllerData;
- (id)sentinelDestination;
- (id)sentinelGroup;

@end
