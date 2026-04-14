@class NSSet, NSDictionary;

@interface PGPublicEventFetchResults : NSObject

@property (retain, nonatomic) NSSet *momentNodesForConsolidatedAddresses;
@property (retain, nonatomic) NSDictionary *publicEventsByTimeLocationTupleIdentifier;
@property (retain, nonatomic) NSDictionary *consolidatedAddressesByMomentIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
