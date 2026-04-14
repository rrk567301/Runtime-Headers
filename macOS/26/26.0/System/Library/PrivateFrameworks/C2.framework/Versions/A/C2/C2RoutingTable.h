@class NSMutableDictionary;

@interface C2RoutingTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *routingTable;

- (void)updateOriginalHostname:(id)a0 destinationHostname:(id)a1;
- (id)init;
- (id)copyAndDecorateRequest:(id)a0;
- (void).cxx_destruct;

@end
