@class NSNumber;

@interface CHIPThreadNetworkDiagnosticsClusterRouteTable : NSObject

@property (retain, nonatomic) NSNumber *extAddress;
@property (retain, nonatomic) NSNumber *rloc16;
@property (retain, nonatomic) NSNumber *routerId;
@property (retain, nonatomic) NSNumber *nextHop;
@property (retain, nonatomic) NSNumber *pathCost;
@property (retain, nonatomic) NSNumber *lqiIn;
@property (retain, nonatomic) NSNumber *lqiOut;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *allocated;
@property (retain, nonatomic) NSNumber *linkEstablished;

- (id)init;
- (void).cxx_destruct;

@end
