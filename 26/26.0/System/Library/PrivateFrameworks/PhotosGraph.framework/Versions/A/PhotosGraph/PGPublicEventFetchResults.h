@class NSSet, NSDictionary;

@interface PGPublicEventFetchResults : NSObject

@property (retain, nonatomic) NSSet *momentNodesForConsolidatedAddresses;
@property (retain, nonatomic) NSDictionary *publicEventsByTimeLocationTupleIdentifier;
@property (retain, nonatomic) NSDictionary *consolidatedAddressesByMomentIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
